//假设今天是星期天，求n天后（n从键盘输入）是星期几
#include<stdio.h>
int main()
{
   int n,a;
   scanf("%d",&n);
   a=n%7;
   switch(a)
   {
      case 1:printf("星期一");break;
      case 2:printf("星期二");break;
      case 3:printf("星期三");break;
      case 4:printf("星期四");break;
      case 5:printf("星期五");break;
      case 6:printf("星期六");break;
      case 0:printf("星期天");break;
   }
}  

