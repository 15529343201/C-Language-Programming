/*3.��дһ��c���Գ��򣬴Ӽ�������a��b��c����������ֵ��������е������*/
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("please input three number:\n");
	scanf("%d,%d,%d",&a,&b,&c);
	max=a;
	if(max<b) max=b;
	if(max<c) max=c;
	printf("the largest number is:%d",max);
	return 0;
} 
/*
please input three number:
5,4,6
the largest number is:6
*/
