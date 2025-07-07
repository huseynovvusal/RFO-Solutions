// https://basecamp.eolymp.com/az/problems/10452
#include<bits/stdc++.h>
using namespace std; 
int main(){ 
long long n,m,i,j,t=0,y,x,l,s,o; 
cin>>n; 
for(i=0;i<n;i++){ 
cin>>m; 
j=m;  
if(m%2==1){ 
m/=2; 
if(m%2==1){ 
y=m/2;
x=y+1;
x*=2;
l=x*2;
s=l*y+x; 
cout<<2*s<<endl;} 
else{ 
o=m*2;
o+=2;
l=m/2; 
cout<<2*l*o<<endl;}} 
else{ 
m/=2; 
if(m%2==1){ 
x=m/2; 
y=m*2-1;
y++;
l=x*2+1;
cout<<2*((y*x)+l)<<endl;
}else{ 
x=m/2;
cout<<2*j*x<<endl; 
}}}return 0;}