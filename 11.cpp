//例10：从键盘任意输入一个整数n,编程计算并输出1-n之间的所有素数之和
# include <stdio.h>
int SumPrime(int n)
{
    int i;
    int k;
    int sum=0;
    for(i=2;i<=n;++i )
    {
        for(k=2;k<i;++k)
        {
            if(i%k==0)
                break;
        }
     if(k == i) sum+= k;
    }
    return sum;
}
int main (void)
{
    int n;
    int sum;
    printf("please enter a number:");
    scanf("%d",&n);
    sum=SumPrime(n);
    printf("sum = %d\n",sum);
 
    return 0;
}

