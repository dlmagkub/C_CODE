#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 100; i++)
	if(1==i%2)
		printf("%d ", i);
	else printf(" ");
	return 0;
}