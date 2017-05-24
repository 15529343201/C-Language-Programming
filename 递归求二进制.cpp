//例3：递归求二进制 
#include<stdio.h>
void fun(int n)
{
	if(n>1)
	fun(n/2);
	printf("%d",n%2);
}
int main(void)
{
	 int x;
	 scanf("%d",&x);
	 fun(x);
}

