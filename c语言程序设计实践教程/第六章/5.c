/*将4X4矩阵转置，用函数*/
#include<stdio.h>

int invert(int a[4][4]);

int main()
{
	int i,j,a[4][4];
	printf("input the elements:\n");
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
	printf("the original matrix:\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}
	invert(a);
	printf("the inverted matrix:\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++)
			printf("%3d",a[i][j]);
		printf("\n"); 
	}
	return 0;
} 

int invert(int a[4][4]){
	int i,j,t;
	for(i=0;i<4;i++){
		for(j=i+1;j<4;j++){
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
	}
}

/*
input the elements:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
the original matrix:
  1  2  3  4
  5  6  7  8
  9 10 11 12
 13 14 15 16
the inverted matrix:
  1  5  9 13
  2  6 10 14
  3  7 11 15
  4  8 12 16
*/


