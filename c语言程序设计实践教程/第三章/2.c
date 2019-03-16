/*编写一个程序,从键盘输入某个分钟数,将其转换成用小时和分钟表示,并将表示结果输出。*/
#include<stdio.h>
int main()
{
	int i,h,m;
	printf("请输入分钟数:\n");
	scanf("%d",&i);
	h=i/60;
	m=i-60*h;
	printf("%d分钟<=>%d小时%d分钟\n",i,h,m);
	return 0;
} 
/*
请输入分钟数:
121
121分钟<=>2小时1分钟
*/
