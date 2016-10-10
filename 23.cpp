//Àý22:e=1+1/1!+1/2!+......Çóe
#include<stdio.h>
int main(void)
{
	float e=1.0,n=1.0;
	int i=1;
	while(1/n>1e-10)
	{
		e+=1/n;
		i++;
		n=i*n;
	}
	printf("the value of e is %f",e);
 } 

