//例5：求100-200之间的素数,以每五个数输出 
#include<stdio.h>
int main(void)
{
	int n=0,i,j;
	for(i=100;i<=200;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			break;
		}
		if(i==j)
		{
		  printf("%d ",i);
		  n++;
		  if(n%5==0)
		  printf("\n");
	    }
	}
	return 0;
} 

