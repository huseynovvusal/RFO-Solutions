// https://basecamp.eolymp.com/az/problems/10030
#include<iostream>
#include<map>
#include<set>

using namespace std;

//struct cmp{
//    bool operator()(const int& a, const int& b) const{
//        return b < a;
//    }
//};
//
//map<int, int, cmp> mp;

map<int,int> mp;

signed main(){
    cin.tie(0)->sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    for(int i = 1, a; i <= n; ++i){
        cin >> a;
        mp[a]++;
    }
    int d = (int)mp.size();
    if(d <= k){
        cout << k - d << '\n';
    }else{
        int ans(0);
        multiset<int> st;
        for(auto to : mp){
                st.insert(to.second);
        }
        for(int i : st){
                ans += i;
                --d;
                if(d == k) break;
        }
        cout << ans << '\n';
    }
    exit(0);
}