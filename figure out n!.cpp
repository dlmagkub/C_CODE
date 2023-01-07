#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0;
	int t = 0;
	printf("input a num =>");
	scanf("%d", &n);
	t = n;
	
	while (n != 1)
	{
		t = t * (n - 1);
		n--;
		
	}
	printf("n!=%d", t);   //º∆À„n£°input n and figure out  n! 
	return 0;
}