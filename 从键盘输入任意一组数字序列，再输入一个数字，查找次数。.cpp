//例15:从键盘输入任意一组数字序列，再输入一个数字，查找次数。 
#include <stdio.h>
int main()
{
    int n,a[100],b,i,cnt=0;
 
    printf("输入数列中数的个数:");
    scanf("%d", &n);
 
    printf("输入数列中的数:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
 
    printf("输入要查询的数字:");
    scanf("%d", &b);
    for(i = 0; i < n; i++)
    {
       if(a[i] == b)
       cnt++;
    }
    printf("%d出现%d次\n", b, cnt);
}

