/*4.��������Ҫ��������Ϊ����һ����������ڶ�����=������*/
#include<stdio.h>
int main()
{
	float d1,d2,result;
	char op;
	printf("input d1,op,d2:\n");
	scanf("%f,%c,%f",&d1,&op,&d2);
	switch(op)
	{
		case '+':result=d1+d2;break;
		case '-':result=d1-d2;break;
		case '*':result=d1*d2;break;
		case '/':result=d1/d2;break;
		default:printf("operation is error!\n");
	} 
	printf("%.2f%c%.2f=%.2f\n",d1,op,d2,result);
	return 0;
} 
/*
input d1,op,d2:
4.5,+,4.5
4.50+4.50=9.00
*/
