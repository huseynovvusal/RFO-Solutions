// https://basecamp.eolymp.com/az/problems/11114
#include<stdio.h>
#include<math.h>
#define ull unsigned long long
const int MOD=998244353;
ull power(ull n, int m){
	if(m<=1){
	return n%MOD;
	}else if(m%2==0){
		return power((n%MOD)*(n%MOD),m/2)%MOD;
	}else{
		return n%MOD*power(n,m-1);
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	ull res=power(2*n+1,m)%MOD;
	printf("%lld",res);
}