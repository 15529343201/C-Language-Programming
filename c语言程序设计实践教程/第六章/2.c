/*编程将下列矩阵中的元素向右移动一列,最后一列移向最左端。
1 2 3 4
5 6 7 8
9 10 11 12
*/
#include<stdio.h>
#define ROW 3
#define COL 4
int main()
{
	int a[ROW][COL];
	int i,j,temp;
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<ROW;i++)
	{
		temp=a[i][COL-1];
		for(j=COL-2;j>=0;j--)
			a[i][j+1]=a[i][j];
		a[i][0]=temp;
	}
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}
	return 0;	
} 
/*
1 2 3 4
5 6 7 8
9 10 11 12
  4  1  2  3
  8  5  6  7
 12  9 10 11
*/
