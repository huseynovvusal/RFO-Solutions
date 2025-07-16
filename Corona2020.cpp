// https://basecamp.eolymp.com/vi/problems/10029

#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a + b - c == 2020)
		printf("%d+%d-%d", a, b, c);
	else if (a - b - c == 2020)
		printf("%d-%d-%d", a, b, c);
	else if (a + b + c == 2020)
		printf("%d+%d+%d", a, b, c);
	else if (a - b + c == 2020)
		printf("%d-%d+%d", a, b, c);
	else
		printf("CORONA");
}