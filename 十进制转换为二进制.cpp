//例1:十进制转换成二进制
#include<stdio.h>
int main(void)
{
   int i=0,n;
   int d[32];
   printf("请输入一个十进制数:");
   scanf("%d",&n);
   while(n>0)
   {
   	 d[i]=n%2;
   	 i++;
   	 n=n/2;
   }
   for(i--;i>=0;i--)
   {
   	 printf("%d",d[i]);
   }
   return 0;
} 

