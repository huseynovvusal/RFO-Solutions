// https://basecamp.eolymp.com/en/problems/9636

#include <stdio.h>
int main()
{
	int a, b, sum;
	scanf("%d%d", &a, &b);
	sum = a - 2 * b;
	if (sum >= 0)
		printf("%d", sum);
	else
		printf("0");
}