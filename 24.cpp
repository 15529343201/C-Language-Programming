//例23:求两个数的最大公约数与最小公倍数 
#include<stdio.h>
int max(int x,int y)
{
    int r,m,t,n;
    if(x<y)
    {
      t=x;
      x=y;
      y=t;
    }
    r=x%y;
    m=x*y;
    while(r!=0)
    {
       x=y;
       y=r;
       r=x%y;
    }
    return y;
}
int min(int x,int y,int z)
{
   int m;
   m=x*y;
   return (m/z);
}
   int main(void)
  {
      int a,b,c,d;
      scanf("%d%d",&a,&b);
      c=max(a,b);
      d=min(a,b,c);
      printf("%d %d ",c,d);
      return 0;
}

