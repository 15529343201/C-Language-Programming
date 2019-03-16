/*��̬����
1.�����ڴ�ռ亯��malloc
������ʽ:(����˵����*) malloc (unsigned int size);
����:���ڴ�Ķ�̬�洢���з���һ�鳤��Ϊ"size"�ֽڵ���������
�����ķ���ֵ,�ɹ�:���������ٿռ��׵�ַ ʧ��:���ؿ�ָ�롣
����,int* pc=(int*)malloc(5*sizeof(int));
2.�����ڴ�ռ亯��calloc
������ʽ:(����˵����*)calloc(n,size);
����:���ڴ涯̬�洢���з���n�鳤��Ϊ"size"�ֽڵ���������
�����ķ���ֵ,�ɹ�:���������ٿռ��׵�ַ; ʧ��:���ؿ�ָ�롣
����,ps=(struct stu*)calloc(2,sizeof(struct stu));
3.�ͷ��ڴ�ռ亯��free
������ʽ:free(void *ptr);
����:�ͷ�ptr��ָ���һ���ڴ�ռ�,ptr��һ���������͵�ָ�����,
��ָ���ͷ�������׵�ַ�����ͷ���Ӧ����malloc��calloc������
���������
*/
//��7.24.�ö�̬����ʵ��һά����Ĵ�����ʹ�á�
#include<stdio.h>
#include<stdlib.h>
int main(void){
	int *array=NULL,num,i;
	printf("please input the number of element:");
	scanf("%d",&num);
	array=(int *)malloc(sizeof(int)*num);
	if(array==NULL){
		printf("out of memory,press any key to quit...\n");
		exit(0);
	}
	printf("please input %d elements:",num);
	for(i=0;i<num;i++)
		scanf("%d",&array[i]);
	printf("%d elements are: \n",num);
	for(i=0;i<num;i++)
		printf("%d,",array[i]);
	free(array);
	return 0;
} 

/*
please input the number of element:4
please input 4 elements:3 5 7 9
4 elements are:
3,5,7,9,
*/
