//例2:十进制转换成二进制(位运算，递归)
#include<stdio.h>
void output(unsigned int n)
{
    if(n)
    {
        output(n >> 1);
        putchar('0' + (n & 1));
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    if(n) output(n); 
    else putchar('0');
    return 0;
}

