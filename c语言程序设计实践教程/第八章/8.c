/*输入线段的两点坐标,编程求线段的长度*/
#include<stdio.h>
#include<math.h>
struct point{
	float x,y;
};
struct line{
	struct point p1,p2;
	float length;
};

int main() 
{
	struct line a;
	printf("请输入线段第1个端点的x,y坐标:\n");
	scanf("%f%f",&a.p1.x,&a.p1.y);
	printf("请输入线段第2个端点的x,y坐标:\n");
	scanf("%f%f",&a.p2.x,&a.p2.y);
	a.length=sqrt((a.p1.x-a.p2.x)*(a.p1.x-a.p2.x)+(a.p1.y-a.p2.y)*(a.p1.y-a.p2.y));
	printf("线段长度=%f\n",a.length);
	return 0;
}

/*
请输入线段第1个端点的x,y坐标:
1 1
请输入线段第2个端点的x,y坐标:
2 2
线段长度=1.414214
*/
