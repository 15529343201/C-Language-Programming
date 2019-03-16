/*1.从键盘上输入一个整数，输出该数所对应的八进制和十六进制数。*/ 
#include<stdio.h>
int main()
{
	int x;
	printf("请输入一个整数x:");
	scanf("%d",&x);
	printf("Octonary number:%o\n",x);
	printf("Hexadecimal number:%x\n",x);
	return 0;
}
/*
请输入一个整数x:12
Octonary number:14
Hexadecimal number:c
*/
