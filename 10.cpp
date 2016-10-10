//例9：从键盘输入一个正整数，判断该数是否素数并输出。如果输入的不是正数，则提示输入错误。
//用C语言编写程序实现。
//测试数据：输入：7          输出：7是素数 。
//                  输入：9           输出：9不是素数 。
//                   输入：-3          输出：输入错误，请输入正整数 
#include <stdio.h>
int is_prime( int n )
{
    int i;
    if ( n < 2 )
        return 0;
    for( i=2; i<=n/2;i++ )
        if ( n%i==0 )
            return 0;
    return 1;
}
int main()
{
    int n;
    while( scanf("%d", &n)!=EOF )
    {
        if ( n <= 0 )
        {
            printf("输入错误，请输入正整数。\n");
        }
        else 
        {
            if ( is_prime( n ) )
                printf("%d是素数。\n", n);
            else
                printf("%d不是素数。\n", n);
        }
    }
    return 0;
}

