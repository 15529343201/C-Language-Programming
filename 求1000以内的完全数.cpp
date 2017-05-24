/*例14：求1000以内的完全数*/ 
#include<stdio.h>
int wan(int x)
{
    int i,sum=0;
    for(i=1;i<=x/2;i++)
    {
        if(x%i==0)
        {
            sum+=i;
        }
    }
    if(sum==x)
    {
        printf("%d its factors are ",x);
        for(i=1;i<=x/2;i++)
        {
            if(x%i==0)
            {
               printf("%d ",i);
            }
        }
        printf("\n");
    }
}
int main(void)
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        wan(i);
    } 
    return 0;
}

