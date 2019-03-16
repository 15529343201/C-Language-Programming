/*例7.3.编写一段程序,要求定义一个含有5个元素的数组,得出最大值和最小值,并输出.*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
	int arr[5];
	int i,max,min;
	printf("请输入5个整数:");
	fflush(stdout);
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("数组元素为:\n");
	for(i=0;i<5;i++)
		printf("%d ",arr[i]);
	max=min=arr[0];
	for(i=0;i<=4;i++){
		if(max<arr[i]) max=arr[i];
		else if(min>arr[i]) min=arr[i];
	}
	printf("\n");
	printf("最大值为:%d\n最小值为:%d\n",max,min);
	return 0;
} 

/*
请输入5个整数:4 5 3 2 -5
数组元素为:
4 5 3 2 -5
最大值为:5
最小值为:-5
*/
