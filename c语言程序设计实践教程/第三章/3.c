/*编写程序，接受从键盘上输入的两个字符(都在'0'-'9'和'A'-'F'范围内),
代表一个十六进制数，然后输出与它相等的十进制数。例如，输入3A，输出58*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("please input:\n");
	scanf("%x%x",&a,&b);
	printf("The decimal value of %x%x is=%d\n",a,b,16*a+b);
	return 0;
} 
/*
please input:
3 A
The decimal value of 3a is=58
*/
