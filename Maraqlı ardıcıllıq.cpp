#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){
    for(int i=n; i>=2; i-=2)
    cout<<i<<' ';
    for(int i=1; i<n; i+=2)
    cout<<i<<' ';}
    else{
    for(int i=n; i>=1; i-=2)
    cout<<i<<' ';
    for(int i=2; i<n; i+=2)
    cout<<i<<' ';}
    }