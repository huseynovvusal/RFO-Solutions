#include<bits/stdc++.h>
using namespace std;
int d[] = {1, 2, 4, 8};

long long kthLuckyNumber(long long k){
    long long sum = 0;
    int m;
    for(int i = 1; i <= 32; i++){
        if(sum + (long long)pow(4, i) < k){
            sum += (long long)pow(4, i);
        }
        else{
            m = i;
            break;
        }
    }
    long long dif = k - sum - 1;
    long long lucky = 0;
    for(int i = 0; i < m; i++){
        lucky = lucky*10 + d[dif%4];
        dif /= 4;
    }
    string ans = to_string(lucky);
    reverse(ans.begin(), ans.end());
    return stoll(ans);
}

long long nextLuckyNumber(long long k){
    long long l = 1, r = 2e+9;
    long long ans = 2e+9;
    while(l <= r){
        long long m = (l + r)/2;
        if(kthLuckyNumber(m) > k){
            ans = m;
            r = m - 1;
        }
        else{
            l = m + 1;
        }
    }
    return kthLuckyNumber(ans);
}
int main()
{
    long long q, t, k;
    cin>>q;
    while(q--)
    {
        cin>>t>>k;
        if(t == 2)
        {
            cout<<nextLuckyNumber(k)<<endl;
        }
        else
        {
            cout<<kthLuckyNumber(k)<<endl;
        }
    }
}