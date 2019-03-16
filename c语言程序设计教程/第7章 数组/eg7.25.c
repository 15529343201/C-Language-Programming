/*用动态数组实现二维数组的创建和使用*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
	int n1,n2;
	int **array,i,j;
	puts("输入一维长度:");
	scanf("%d",&n1);
	puts("输入二维长度:");
	scanf("%d",&n2);
	array=(int**)malloc(n1*sizeof(int*));//第一维,开辟元素个数为n1的指针数组,用来存放二维数组每行首地址
	if(array==NULL){
		printf("out of memory,press any key to quit...\n");
		exit(0);
	} 
	for(i=0;i<n1;i++)
	{
		array[i]=(int*)malloc(n2*sizeof(int));
		if(array[i]==NULL){
			printf("out of memory,press any key to quit...\n");
			exit(0);
		} 
		for(j=0;j<n2;j++){
			array[i][j]=i+j+1;
			printf("%d\t",array[i][j]);
		}
		puts("");
	}
	for(i=0;i<n1;i++)
		free(array[i]);//释放第二维指针 
	free(array);//释放第一维指针 
	return 0;
} 

/*
输入一维长度:
5
输入二维长度:
8
1       2       3       4       5       6       7       8
2       3       4       5       6       7       8       9
3       4       5       6       7       8       9       10
4       5       6       7       8       9       10      11
5       6       7       8       9       10      11      12
*/ 
