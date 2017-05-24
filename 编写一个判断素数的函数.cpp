//例7： 编写一个判断素数的函数
#include<stdio.h>
int prime(int n)
{
   int i;
   for(i=2;i<n;i++)
   {
   	if(n%i==0)
   	{
   		return 0;
	}
	return 1;
   }
} 
int main(void)
{
	int m;
	scanf("%d",&m);
	if(prime(m))
	{
		printf("%d是素数",m);
	}
	else
	{
		printf("%d不是素数",m);
	}
	return 0;
}

