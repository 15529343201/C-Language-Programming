/*��дһ������,�������û�����ķ���ذ�ĳ��Ϳ�
����ذ�����������̺����(20.8Ԫ/ƽ����).*/
#include<stdio.h>
int main()
{
	float len,wid,area;
	printf("Enter the length and the width of floor!\n");
	scanf("%f%f",&len,&wid);
	area=len*wid;
	printf("The area of the floor is %5.2f\n", area);
	printf("The cost is ��%5.2f\n",area*20.8);
	return 0;
}
/*
Enter the length and the width of floor!
2 3
The area of the floor is  6.00
The cost is ��124.80
*/ 
