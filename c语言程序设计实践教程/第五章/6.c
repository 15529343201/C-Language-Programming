/*����̩�ռ���sin(x)=x-x^3/3!+x^5/5!-x^7/7!+x^9/9!-...,
����sin(x)��ֵ��Ҫ�����һ��ľ���ֵС��10^-5,��ͳ�ƴ�ʱ
�ۼ��˶����*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n=1,count=0;
	float x;
	double sum,t;
	printf("please input x:\n");
	scanf("%f",&x);
	sum=x;
	t=x;
	do{
		t=-t*x*x/((n+1)*(n+2)); //t=-x^3/3! t=x^3/3!*x^2/(4*5)=x^5/5!
		sum=sum+t; //sum=x-x^3/3!
		n=n+2; //n=3
		count++; 
	}while(fabs(t)>=1e-5);
	printf("sin(x)=%f,count=%d\n",sum,count);
	return 0;
} 
/*
please input x:
1
sin(x)=0.841471,count=4
*/
