//Àý19:Âú×ãabcd=(ab+cd)^2
#include<stdio.h>
int main(void)
{
	int i,a,b;
	for(i=1000;i<10000;i++)
	{
		a=i/100;
		b=i%100;
		if((a+b)*(a+b)==i)
		printf("%d ",i);
	}
 } 

