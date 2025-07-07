// https://basecamp.eolymp.com/az/problems/9001
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b;
	cin>>a>>b;
	if(a>0 and b>0)
	cout<<1;
	else if((a<0 and b>0) or a==0 or b==0)
	cout<<0;
	else if(a<0 and b<0){
	if((abs(b-a)+1)%2==1)
	cout<<-1;
	else if((abs(b-a)+1)%2==0)
	cout<<1;}
}