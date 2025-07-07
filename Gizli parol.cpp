#include<bits/stdc++.h>

using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string t,c,m,ans="";
	cin>>t>>c;
	int ts=t.size(), cs=c.size();
	int ns=max(ts,cs);
	for(int i=0; i<ns; ++i){
		if(i<ts) ans+=t[i];
		if(i<cs) ans+=c[i];
	}
	cout<<ans<<'\n';
	return 0;
}