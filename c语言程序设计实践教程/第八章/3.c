/*对复数定义结构体类型,编程实现复数的加法*/
#include<stdio.h>
struct complex{
	int real,imag;
};
int main()
{
	struct complex a,b,sum;
	printf("please input the first complex:\n");
	scanf("%d%d",&a.real,&a.imag);
	printf("please input the second complex:\n");
	scanf("%d%d",&b.real,&b.imag);
	sum.real=a.real+b.real;
	sum.imag=a.imag+b.imag;
	if(sum.imag>0)
		printf("sum=%d+%di\n",sum.real,sum.imag);
	else if(sum.imag==0)
		printf("sum=%d\n",sum.real);
	else
		printf("sum=%d-%di\n",sum.real,(-1)*sum.imag);
	return 0;
} 
/*
please input the first complex:
3 -5
please input the second complex:
6 2
sum=9-3i
*/
