/*��дһ������,�����ά�����е����Ԫ��,������ָ�뷽ʽ����*/
#include<stdio.h>
#define M 3
#define N 4

int findmax(int (*p)[4],int n){
	int i,max;
	max=**p;
	for(i=1;i<n;i++){
		if(max<*(*p+i)) 
			max=*(*p+i);
	}
	return max;
}

int main()
{
	int a[M][N],i,j,t;
	int n=M*N;
	printf("please input array:\n");
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]);
	t=findmax(a,n); 
	printf("���ֵ��:%d\n",t);
	return 0;	
} 

/*
please input array:
1 2 3
4 5 6
7 8 9
3 4 5
���ֵ��:9
*/
