#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0;
	int t = 1;
	int c = 0;
	printf("input a num =>");
	scanf("%d", &n);
	while (t != n)
	{
		t = t * (n + 1);
		t++;
		c = t + c;
	}
	printf("%d", c);
	return 0;
}