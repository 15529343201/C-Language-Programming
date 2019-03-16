/*编写一个程序，从键盘读入一个矩形的两个边的值(整数),输出矩形面积。*/
#include<stdio.h>
int main()
{
	int x,y,area;
	printf("输出矩形的长和宽:\n");
	scanf("%d%d",&x,&y);
	area=x*y;
	printf("矩形面积为:%d\n",area);
	return 0;
} 
/*
输出矩形的长和宽:
3 4
矩形面积为:12
*/
