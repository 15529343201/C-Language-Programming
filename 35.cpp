//Ë«°ûÌ¥ËØÊı 
#include<stdio.h>
int p(int n)
{
    int i;
    if(n<2)
        return 0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int i,x,y;
     int a=0;
     scanf("%d%d",&x,&y);
     if(x<=0||y<=0)
         printf("error");
    for(i=x;i+2<=y;i++)
    {
        if(p(i)&&p(i+2))
        {
            a++;
            printf("(%d,%d)",i,i+2);
        }
    }
    printf("\n");
    return 0;
}

