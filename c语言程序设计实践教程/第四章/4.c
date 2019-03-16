/*4.运算器，要求输出结果为：第一个数运算符第二个数=运算结果*/
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
