/*�ö�̬����ʵ�ֶ�ά����Ĵ�����ʹ��*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
	int n1,n2;
	int **array,i,j;
	puts("����һά����:");
	scanf("%d",&n1);
	puts("�����ά����:");
	scanf("%d",&n2);
	array=(int**)malloc(n1*sizeof(int*));//��һά,����Ԫ�ظ���Ϊn1��ָ������,������Ŷ�ά����ÿ���׵�ַ
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
		free(array[i]);//�ͷŵڶ�άָ�� 
	free(array);//�ͷŵ�һάָ�� 
	return 0;
} 

/*
����һά����:
5
�����ά����:
8
1       2       3       4       5       6       7       8
2       3       4       5       6       7       8       9
3       4       5       6       7       8       9       10
4       5       6       7       8       9       10      11
5       6       7       8       9       10      11      12
*/ 
