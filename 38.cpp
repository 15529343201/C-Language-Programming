//±àĞ´¼ÆËãÆ÷³ÌĞò
#include<stdio.h>
int main()
{
   float x,y,result;
   char op;
   scanf("%f%c%f",&x,&op,&y);
   switch(op)
   {
      case '+':result=x+y;break;
      case '-':result=x-y;break;
      case '*':result=x*y;break;
      case '/':result=x/y;break;
      default:printf("error");
   }
   printf("%.2f%c%.2f=%.2f",x,op,y,result);
}

