#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

void print_bin(int n)
{
	int l = sizeof(n) * 8;//总位数。
	int i= n;				//原代码为“int i;”因此编译会显示形参未定义。形参未定义为随机值。而下方需要使用i的值进行判断。
	if (i == 0)
	{
		printf("0");
		return;
	}
	for (i = l - 1; i >= 0; i--)//略去高位0.
	{
		if (n&(1 << i)) break;
	}

	for (; i >= 0; i--)
		printf("%d", (n&(1 << i)) != 0);
}

int main()
{
	int c;
	while (1)
	{
		scanf("%d", &c);
		print_bin(c);	
		printf("\n");
	}	
	return 0;
}

