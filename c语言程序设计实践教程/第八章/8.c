/*�����߶ε���������,������߶εĳ���*/
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
	printf("�������߶ε�1���˵��x,y����:\n");
	scanf("%f%f",&a.p1.x,&a.p1.y);
	printf("�������߶ε�2���˵��x,y����:\n");
	scanf("%f%f",&a.p2.x,&a.p2.y);
	a.length=sqrt((a.p1.x-a.p2.x)*(a.p1.x-a.p2.x)+(a.p1.y-a.p2.y)*(a.p1.y-a.p2.y));
	printf("�߶γ���=%f\n",a.length);
	return 0;
}

/*
�������߶ε�1���˵��x,y����:
1 1
�������߶ε�2���˵��x,y����:
2 2
�߶γ���=1.414214
*/
