//例26：给定一个不多于5位数，求出该数是几位数，并逆序输出 
#include<stdio.h>
int main()
{
     int a,b,c,d,e;
      long x;
     scanf("%ld",&x);
     if(x<0)
     {printf("error");}
     e=x%10;
     d=x/10%10;
     c=x/100%10;
     b=x/1000%10;
     a=x/10000;
     if(a!=0)
         printf("%d\n%d %d %d %d %d\n%d%d%d%d%d",5,a,b,c,d,e,e,d,c,b,a);
     else if(b!=0)
         printf("%d\n%d %d %d %d\n%d%d%d%d",4,b,c,d,e,e,d,c,b);
     else if(c!=0)
         printf("%d\n%d %d %d\n%d%d%d",3,c,d,e,e,d,c);
     else if(d!=0)
         printf("%d\n%d %d\n%d%d",2,d,e,e,d);
     else
         printf("%d\n%d\n%d",1,e,e);
}

