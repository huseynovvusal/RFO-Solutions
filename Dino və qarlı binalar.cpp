// https://basecamp.eolymp.com/az/problems/9637
#include<stdio.h>
int main(){
	int a,b,mb;
	scanf("%d%d",&a,&b);
	long dif=b-a;
	printf("%d",b-(dif*(dif+1))/2);
}