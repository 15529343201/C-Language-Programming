//例31:从键盘输入10个学生成绩存储在数组中，求成绩最高者的序号和成绩
#include<stdio.h>
int main()
{
    int a[11],max,i,j;
    for(i=1;i<11;i++)
    {
       scanf("%d",&a[i]);
    }
    max=a[1];
    for(i=1;i<11;i++)
    {
      if(max<a[i])
     { max=a[i];
 
      j=i;}
    }
    printf("%d %d",j,max);
}

