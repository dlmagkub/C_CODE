#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	if(1==i%2)
//		printf("%d ", i);
//	else printf(" ");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	a = getchar();
//		printf("%d %c", a, a);//≤È—ØASCII¬Î≥Ã–Ú
//	return 0;
//
//}

//int main()
//{
//	int a = 72;
//	int b = 69;
//	int c = 76;
//	int d = 76;
//	int e = 79;
//	printf("%c %c %c %c %c", a, b, c, d, e); //HELLO 72 69 76 79
//	return 0;
//}

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