/*2.从键盘上输入一个梯形的上底a、下底b和高h，输出梯形的面积s。*/
#include<stdio.h>
int main()
{
	float a,b,h,s;
	printf("请输入a,b,h:");
	scanf("%f,%f,%f",&a,&b,&h);
	s=(a+b)*h/2;
	printf("area=%6.3f\n",s);
	return 0;	
} 
/*
请输入a,b,h:2.4,2.6,2.2
area= 5.500
*/
