//例16：三重回文数
#include<stdio.h>
int judge(int n)
{
	int temp,sum=0;
	temp=n;
	while(n)
	{
		sum=sum*10+n%10;
		n/=10;
	}
	if(temp==sum)
	{
		return 1;
	}
	return 0;
}
int main(void)
{
	int i;
	for(i=10;i<=1000;i++)
	{
		if(judge(i)&&judge(i*i)&&judge(i*i*i))
		printf("i=%4d,i*i=%4d,i*i*i=%4d\n",i,i*i,i*i*i);
	}
	return 0;
}

