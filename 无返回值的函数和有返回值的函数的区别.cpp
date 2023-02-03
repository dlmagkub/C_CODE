#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int pt(int stuff)
{
	//printf("%d", stuff);
	return stuff - 16;
}

int main()
{
	int a = 24;
	int b = 0;
	pt(a);
	printf("%d", b=pt(a)); //函数返回值的用法。传回主函数打印，也可以使用无返回值的函数，直接在函数内打印再回到main函数。

	return 0;
}
