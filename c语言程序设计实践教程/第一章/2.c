/*2.�Ӽ���������һ�����ε��ϵ�a���µ�b�͸�h��������ε����s��*/
#include<stdio.h>
int main()
{
	float a,b,h,s;
	printf("������a,b,h:");
	scanf("%f,%f,%f",&a,&b,&h);
	s=(a+b)*h/2;
	printf("area=%6.3f\n",s);
	return 0;	
} 
/*
������a,b,h:2.4,2.6,2.2
area= 5.500
*/
