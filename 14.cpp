//例13：特殊的完全平方数：这个数既是完全平方数又有两位数字相同
#include<stdio.h>
int main(void)
{
	int i,j;
	int bai,ge,shi;
	printf("the result is:\n");
	for(i=100;i<=999;i++)
	{
		j=10;
		while(j*j<=i)
		{
			if(i==j*j)
			{
				bai=i/100;
				shi=i/10%10;
				ge=i%10;
				if(bai==shi||bai==ge||shi==ge)
				printf("%5d",i);
			}
			j++;
		}
	}
 } 

