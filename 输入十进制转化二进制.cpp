#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

void print_bin(int n)
{
	int l = sizeof(n) * 8;//��λ����
	int i= n;				//ԭ����Ϊ��int i;����˱������ʾ�β�δ���塣�β�δ����Ϊ���ֵ�����·���Ҫʹ��i��ֵ�����жϡ�
	if (i == 0)
	{
		printf("0");
		return;
	}
	for (i = l - 1; i >= 0; i--)//��ȥ��λ0.
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

