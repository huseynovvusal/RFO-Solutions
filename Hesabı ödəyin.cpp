#include<iostream>
using namespace std;
int main(){
	unsigned long long n;
	cin>>n;
	if(n%10)
	cout<<n+n/10+1;
	else
	cout<<n+n/10;
}