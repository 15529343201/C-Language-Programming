//一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。 它在第N次落地后反弹多高？第N次落地时共经过多少米？ 保留两位小数
#include<stdio.h>
int main()
{
    float M,N,s,h;
    int i;
     
    scanf("%f%f",&M,&N);
    h=M;
    s=M;
    for(i=1;i<=N-1;i++)
    {
        h=h/2;
        s+=h*2;
         
    }
    printf("%.2f %.2f",h/2,s);
}

