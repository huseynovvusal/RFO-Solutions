// https://basecamp.eolymp.com/az/problems/8358
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v;
	int a,
	mina=10000000,maxa=0,count=0;
	double sum=0;
	while(cin>>a){
		v.push_back(a);
		if(a>maxa)
		maxa=a;
		if(a<mina)
		mina=a;
	}
	for(int i=0; i<v.size(); i++){
		if(v[i]!=mina and v[i]!=maxa){
		sum+=v[i];
		count++;}
	}
	cout<<round(sum/count);
}