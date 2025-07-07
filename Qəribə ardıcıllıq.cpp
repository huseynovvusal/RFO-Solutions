#include<iostream>
#include<vector>
#define pb push_back
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v;
    v.pb(1);
    v.pb(11);
    for(int i=12; i<=92; i+=11) v.pb(i);
    v.pb(91);
    for(int i=101; i<909; i+=10){
        v.pb(i);
        if(i%100/10==9){ v.pb(i+1); i++;}
    }
    for(int i=909; i<990; i+=10){
        v.pb(i);
    }
    v.pb(991);
    for(int i=1001; i<=9989; i+=10){
        if(i%1000/10==99)//1991-->1992 2002 ...
        i+=1;
        v.pb(i);
    }
    v.pb(9991);
    for(int i=10001; i<=99989; i+=10){
        if(i%10000/10==999)//19991-->19992 20002 ...
        i+=1;
        v.pb(i);
    }
    v.pb(99991);
    for(int i=100001; i<1e6; i+=10){
        if(i%100000/10==9999)//199991-->199992 200002 ...
        i+=1;
        v.pb(i);
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<' ';
    }
    return 0;
}