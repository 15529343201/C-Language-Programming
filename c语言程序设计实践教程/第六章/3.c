/*有一个已按从大到小排序的整数数组,今输入一个整数,
要求按原来的排序规律插入到数组中*/
#include<stdio.h>
#define N 10
int main()
{
	int a[N]={100,98,87,85,76,65,54,23,9};
	int i,n,pos=0;
	printf("input:\n");
	scanf("%d",&n);
	while(pos<N){
		if(n<a[pos]) pos++;
		else break;
	}
	for(i=N-1;i>pos;i--)
		a[i]=a[i-1];
	a[pos]=n;
	printf("output:\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	return 0;
} 
/*
input:
10
output:
100 98 87 85 76 65 54 23 10 9
*/
