/*动态数组
1.分配内存空间函数malloc
调用形式:(类型说明符*) malloc (unsigned int size);
功能:在内存的动态存储区中分配一块长度为"size"字节的连续函数
函数的返回值,成功:返回所开辟空间首地址 失败:返回空指针。
例如,int* pc=(int*)malloc(5*sizeof(int));
2.分配内存空间函数calloc
调用形式:(类型说明符*)calloc(n,size);
功能:在内存动态存储区中分配n块长度为"size"字节的连续区域。
函数的返回值,成功:返回所开辟空间首地址; 失败:返回空指针。
例如,ps=(struct stu*)calloc(2,sizeof(struct stu));
3.释放内存空间函数free
调用形式:free(void *ptr);
功能:释放ptr所指向的一块内存空间,ptr是一个任意类型的指针变量,
它指向被释放区域的首地址。被释放区应是由malloc或calloc函数所
分配的区域。
*/
//例7.24.用动态数组实现一维数组的创建和使用。
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
