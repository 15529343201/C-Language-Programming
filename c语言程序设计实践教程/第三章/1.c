/*1.��дһ������,�Ӽ�������һ��Բ׶��İ뾶r�͸߶�h,���������*/
#include<stdio.h>
#define PI 3.1415
int main()
{
	float r,h,v;
	printf("please input r,h:\n");
	scanf("%f,%f",&r,&h);
	v=PI*r*r*h/3;
	printf("���=%f\n",v);
	return 0;
} 
/*
please input r,h:
3,3
���=28.273500
*/
