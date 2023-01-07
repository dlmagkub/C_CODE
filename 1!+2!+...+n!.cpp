#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0;
	int t = 1;
	int c = 1;
	int b = 1;
	printf("input a num =>");
	scanf("%d", &n);
	while (t < n)
	{
		c = (t + 1)*c;
		t++;
		b = b + c;
	}
	printf("%d %d", c, b);
	
	return 0;
}