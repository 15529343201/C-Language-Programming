/*输入5X5阶矩阵,编程实现以下功能。
(1)求两条对角线上的各元素之和。
(2)求两条对角线上行、列下标均为偶数的各元素之积。
*/
#include<stdio.h>
#define SIZE 5
int main()
{
	int a[SIZE][SIZE],i,j,sum=0;
	long t=1;
	printf("enter array:\n");
	for(i=0;i<SIZE;i++)
		for(j=0;j<SIZE;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<SIZE;i++)
	for(j=0;j<SIZE;j++)
	{
		if(i==j||i+j==SIZE-1) sum+=a[i][j];
		if((i==j||i+j==SIZE-1)&&i%2==0&&j%2==0) t*=a[i][j];
	}
	printf("sum=%d\nt=%ld\n",sum,t);
	return 0;
} 
/*
enter array:
1 2 3 4 5
5 4 3 2 1
0 1 2 3 4
4 3 2 1 0
1 1 1 1 1
sum=20
t=10
*/
