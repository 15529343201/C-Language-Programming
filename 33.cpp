//例31:已有一个已排好的9个元素的数组，今输入一个数要求按原来排序的规律将它插入数组中。
#include<stdio.h>
int main()
{
    int a[10],i,index,s;
    for(i=0;i<9;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&s);
    for(i=0;i<9;i++)
    {
        if(s<a[i])
        {
            index=i;
            break;
        }
    }
    if(i==9)
    {
    a[9]=s;
    }
    else{
        for(i=9;i>index;i--)
        {
            a[i]=a[i-1];
        }
        a[index]=s;
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
}

