// https://basecamp.eolymp.com/az/problems/11113
#include<stdio.h>
#include<algorithm>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%d",std::min(std::min(n,m),(n+m)/3));
}