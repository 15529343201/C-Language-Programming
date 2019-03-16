/*从键盘输入一个2行3列的矩阵,并将其转置*/
#include<stdio.h>
int main(void){
	int i,j;
	int C[2][3];
	int D[3][2];
	printf("Input matrix C[2][3]:\n");
	for(i=0;i<2;i++)
	for(j=0;j<3;j++)
		scanf("%d",&C[i][j]);
	printf("matrix C[2][3]:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%3d ",C[i][j]);
			D[j][i]=C[i][j];
		}
		printf("\n");
	}
	printf("matrix D[3][2]:\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=1;j++){
			printf("%3d",D[i][j]);
		}
		printf("\n");
	}
	return 0;
} 

/*
Input matrix C[2][3]:
3 4 5
6 7 8
matrix C[2][3]:
  3   4   5
  6   7   8
matrix D[3][2]:
  3  6
  4  7
  5  8
*/
