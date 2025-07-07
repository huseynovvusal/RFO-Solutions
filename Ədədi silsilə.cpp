// https://basecamp.eolymp.com/az/problems/11116
#include<stdio.h>
#include<math.h>
int main(){
	long n;
	scanf("%ld",&n);
	while(n%2==0){ n/=2; }
	int cnt=0;
	for(int i=1; i<=sqrt(n); ++i){
		if(n%i==0){
			if(n/i==i)
			cnt++;
			else
			cnt+=2;
		}
	}
	printf("%d",cnt*2);
}