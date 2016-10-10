//例28:输入月份号,输出月份 
#include<stdio.h>
int main(void)
{
    char *month[]={
     "January",
     "February",
     "March",
     "April",
     "May",
     "June",
     "Junly",
     "Augest",
     "Septemper",
     "October",
     "November",
     "December",
     };
    int i;
    char **p;
    p=month;
    scanf("%d",&i);
    while(i!=0)
    {
 
       if(i<0||i>12)
       {
           printf("error\n");
           scanf("%d",&i);
       }
      else{
    printf("%s\n",*(p+i-1));
    scanf("%d",&i);
    }
    }
    return 0;
}

