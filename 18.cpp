//Àı17£ºÇóÇ×ÃÜÊı 
#include<stdio.h>
int fun(int n)
{
	int sum1=0,sum2=0,i,j,k;
	for(i=1;i<n;i++)
     {
	    if(n%i==0)
		sum1+=i;
	 } 
	 for(k=1;k<sum1;k++)
	 {
	 	if(sum1%k==0)
	 	sum2+=k;
	 }
	 if(sum2==i&&i!=sum1&&i<sum1)
	 {
	 	printf("%5d=>%5d\n",i,sum1);
	 }
 } 
 int main(void)
 {
 	int i;
 	for(i=1;i<10000;i++)
 	{
 		fun(i);
	}
	return 0;
 }

