/*编写一个程序,打印出用户键入的数字的平方值,用浮点数表示。*/
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y;
	printf("请输入一个数:");
	scanf("%f",&x);
	y=pow(x,2);
	printf("%f的平方=%f\n",x,y);
	return 0;
}
/*
请输入一个数:3.2
3.200000的平方=10.240001
*/ 
