// https://basecamp.eolymp.com/en/problems/9638

#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if ((a + b) % 2 != 0)
	{
		printf("-");
		return 0;
	}
	printf("%d", (a + b) / 2);
}