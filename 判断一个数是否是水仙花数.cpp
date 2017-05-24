//例12：判断一个数是否是水仙花数
#include<stdio.h>
int judge(int n)
{
	int a,b,c;
	a=n%10;
	b=n/10%10;
	c=n/100;
	if(a*a*a+b*b*b+c*c*c==n)
	{
		return 1;
	}
	return 0;
} 
int main(void)
{
	int m;
	scanf("%d",&m);
	if(judge(m)==1)
	{
		printf("%d是水仙花数",m);
	}
	else 
	{
		printf("%d不是水仙花数",m);
	}
	return 0;
}

