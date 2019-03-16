/*1.编写一个程序,从键盘输入一个圆锥体的半径r和高度h,计算其体积*/
#include<stdio.h>
#define PI 3.1415
int main()
{
	float r,h,v;
	printf("please input r,h:\n");
	scanf("%f,%f",&r,&h);
	v=PI*r*r*h/3;
	printf("体积=%f\n",v);
	return 0;
} 
/*
please input r,h:
3,3
体积=28.273500
*/
