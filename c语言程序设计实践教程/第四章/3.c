/*3.���������������,��дһ������,��123456��������ڼ�*/
#include<stdio.h>
int main()
{
	int n=123456;
	n=n%7;
	printf("\n����");
	switch(n)
	{
		case 0:printf("��");break;
		case 1:printf("һ");break;
		case 2:printf("��");break;
		case 3:printf("��");break;
		case 4:printf("��");break;
		case 5:printf("��");break;
		case 6:printf("��");break;
	}
	printf("\n\n");
	return 0;
} 
