// https://basecamp.eolymp.com/vi/problems/10031
#include<bits/stdc++.h>
using namespace std;

inline int read();

constexpr int inf = 1e9 + 7;

int n, d, tree[400020];
map<int, int> comp;

struct cord{
	int x, h;
	bool operator<(const cord& c){
		return x < c.x;
	};
} a[100005];


inline void build(int l, int r, int node){
	if(l == r){
		tree[node] = a[l].h;
		return;
	}
	int mid = l + ((r - l) >> 1);
	
	build(l, mid, node << 1);
	
	build(mid + 1, r, node << 1 | 1);
	
	tree[node] = max(tree[node << 1], tree[node << 1 | 1]);
	return;
}

int get_ans(int l, int r, int node, int L, int R){
	if(l > R || r < L || r < l) return -inf;
	if(l >= L && r <= R) return tree[node];
	int mid = l + ((r - l) >> 1);
	return max(get_ans(l, mid, node << 1, L, R), get_ans(mid + 1, r, node << 1 | 1, L, R));
}

signed main(){
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	n = read(), d = read();
	
	register int j(1);
	
	loop:
		a[j].x = read(), a[j++].h = read();
	if(j <= n) goto loop;
	
	sort(a+1,a+n+1);
	
	build(1, n, 1);
	
	int ans(0);
	
	for(register int i = 2; i < n; ++i){
		
		int l = 1, r = i - 1, mid, best{-1};
		
		while(l <= r){
			mid = l + ((r - l) >> 1);
			
			if(a[i].x - a[i - mid].x <= d){
				l = mid + 1, best = mid;
			}else{
				r = mid - 1;
			}
		}
		
		bool flagl = false;
		
		if(best != -1){
			
			if(get_ans(1, n, 1, i - best, i - 1) >= 1ll * a[i].h * 2) flagl = true;
			
		}
		
		if(!flagl) continue;
		
		l = 1, r = n - i, best = -1;
		
		while(l <= r){
			mid = l + ((r - l) >> 1);	
			if(a[i + mid].x - a[i].x <= d){
				l = mid + 1, best = mid;
			}else{
				r = mid - 1;
			}
		}
		
		bool flagr = false;
		
		if(best != -1){
			
			if(get_ans(1, n, 1, i + 1, i + best) >= 1ll * a[i].h * 2) flagr = true;
			
		}
		
		ans += (flagl & flagr);
		
		
		
		
		
		
	}
	
	
	
	cout << ans << '\n';
	
	
	return 0;
}

inline int read() {
  //  opt = 0;
    char ch = getchar();
    int x = 0, f = 1;
    while (ch < '0' || ch > '9') {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while ('0' <= ch && ch <= '9') {
        x = (x << 1) + (x << 3) + ch - '0';
        ch = getchar();
    }
    //if (ch == ' ') opt = 1;
    return x * f;
}