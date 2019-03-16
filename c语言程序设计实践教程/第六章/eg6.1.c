/*有N个数按从小到大的顺序存放在一个数组中,输入一个数,要求用折半
查找法找出该数是数组中第几个元素的值。如果该数不在数组中,则打印"无此数"*/
#include<stdio.h>
#define N 10
int main()
{
	int a[N];
	int i,j,number,low,high,mid,loca;
	int flag=1,sign=1;
	printf("enter:\n");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	printf("input:");
	scanf("%d",&number);
	while(flag==1){
		loca=1;
		low=0;
		high=N-1;
		sign=1;
		if(number<a[0]||number>a[N-1])
			loca=-1;
		while((sign==1)&&(low<=high)){
			mid=(low+high)/2;
			if(number==a[mid]){
				loca=mid;
				printf("find %d,%d\n",number,loca+1);
				sign=0;
				flag=0;
			}else if(number<a[mid]){
				high=mid-1;
			}else{
				low=mid+1;
			}
		}
		if(sign==1||loca==-1){
			printf("not found\n");
			flag=0;
		}
	}
} 
/*
enter:
1 3 5 7 9 11 13 15 17 19
input:11
find 11,6
enter:
1 3 5 7 9 11 13 15 17 19
input:10
not found
*/
