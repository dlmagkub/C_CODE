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
	printf("%d", b=pt(a)); //��������ֵ���÷���������������ӡ��Ҳ����ʹ���޷���ֵ�ĺ�����ֱ���ں����ڴ�ӡ�ٻص�main������

	return 0;
}
