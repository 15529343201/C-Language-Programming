/*��ð�ݷ��������е�N��������������,���ɴ�С��˳�����*/
#include<stdio.h>
#define N 5
int main()
{
	int a[N];
	int i,j,t;
	printf("input:\n");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(j=0;j<N-1;j++)
	for(i=0;i<N-j;i++)
	if(a[i]>a[i+1]){
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
	printf("the sorted:\n");
	for(i=0;i<N;i++)
		printf("%4d",a[i]);
	return 0;
} 
/*
input:
6 2 8 4 9
the sorted:
   2   4   6   8   9
*/
