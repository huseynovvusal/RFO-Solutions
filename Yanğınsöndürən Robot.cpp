#include <bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0)
#define in(x) scanf("%d", &x)

int n, p, q, x[1 << 11], dp[1 << 11][1 << 11];

inline int Find(int pos, int w){
    int y = x[++pos] + w - 1;
    int l{pos}, r{n - 1}, mid, best(pos);
    while(l <= r){
        mid = ((l + r) >> 1);
        if(x[mid] <= y) l = (best = mid, mid + 1);
        else r = mid - 1;
    }
    return best;
}

inline bool check(int &w){
    dp[0][0] = -1;
    for(int i = 0; i <= p; ++i){
        for(int j = 0; j <= q; ++j){
            if(!i and !j) continue;
            dp[i][j] = max((i ? Find(dp[i - 1][j], w) : 0), (j ? Find(dp[i][j - 1], (w << 1)) : 0));
            if(dp[i][j] == n - 1) return true;
        }
    }
    return false;
}

void solve(){
    in(n), in(p), in(q);
    for(int i = 0; i < n; ++i) in(x[i]);
    sort(x, x + n);
    int l(1), r{x[n - 1]}, mid, best(0);
    while(l <= r){
        mid = l + ((r - l) >> 1);
        if(check(mid)) r = (best = mid, mid - 1);
        else l = mid + 1;
    }
    cout << best << '\n';
}

signed main(){
    SPEED;
    solve();
    exit(0);
}