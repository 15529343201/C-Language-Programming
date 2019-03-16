/*例7.2.定义一个由整数组成的数组,求出其中奇数的个数和偶数的个数,并打印*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
	int arr[]={1,2,3,4,5,6,8};
	int i,js=0,os=0;
	int len=sizeof(arr)/sizeof(int);
	printf("数组元素为:\n");
	for(i=0;i<len;i++){
		if(arr[i]%2==0) os+=1;
		else js+=1;
		printf("%d ",arr[i]);
	}
	printf("\n偶数个数为:%d\n奇数个数为:%d",os,js);
	return 0;
} 

/*
数组元素为:
1 2 3 4 5 6 8
偶数个数为:4
奇数个数为:3
*/
