/*��д���򣬽��ܴӼ���������������ַ�(����'0'-'9'��'A'-'F'��Χ��),
����һ��ʮ����������Ȼ�����������ȵ�ʮ�����������磬����3A�����58*/
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
