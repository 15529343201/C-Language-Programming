/*一维数组名作为函数参数 冒泡排序*/
#include<stdio.h>
void sort(int b[10],int n){
	int i,j,t;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(b[j]<b[j+1]){
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
}
int main(void){
	int a[10],i;
	printf("please input 10 numbers:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	sort(a,10);
	printf("sorted data is:\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	return 0;
} 

/*
please input 10 numbers:
12 34 1 65 67 87 78 98 125 6
sorted data is:
125 98 87 78 67 65 34 12 6 1
*/
