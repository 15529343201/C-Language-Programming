//Àı11£º»ØÎÄËØÊı
#include<stdio.h>
int ss(int i)
{
	int j;
	if(i<1)
	return 0;
	if(i==2)
	return 1;
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
			return 0;
		}
		else if(i!=j+1)
		{
			continue;
		}
		return 1;
	}
}
int main(void)
{
	int i,temp,sum=0;
	scanf("%d",&i);
	if(ss(i)==1)
	{
		temp=i;
        while(i)
        {
           sum = sum*10 + i%10; 
           i/= 10;
        }
        if(temp == sum) 
            printf("yes\n");
        else
            printf("no\n");
        return 0;
	}
 } 

