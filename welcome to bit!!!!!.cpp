#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main()
{
	char arr1[] = "welcome to bit!!!!!";
	char arr2[] = "###################";
	int left = 0;
	int right = strlen(arr1) - 1;  //�����ַ��͵����鳤�ȵĺ���strenlen(arr),  use strenlen() to figure out the length of char arr.
	while (left <= right)          // sizeof(arr)/sizeof(arr[0]) figure out the length of int arr.
	{
		arr2[left] = arr1[left]; //Err  char arr2[left]= char arr1[left]   'char' is used to define. should be written at begining.
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(100);//˯����S��д Sleep for one sceond.  'S'is capital 
		system("cls");//�����Ļ clear the screen
		right--;
		left++;

	}
	printf("%s\n", arr2);
	return 0;