#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int is_leap_year(int n)
{

	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));  //形式参数与实际参数不一样，调用函数当中只写形式参数
}


int main()
{
	int i = 0;
	for (i = 1000; i <= 2000; i++)  //循环语句当中加“ ；”不是“ ，”
	{
		if (is_leap_year(i)== 1)  //不是 is_leap_year(i==1)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
