/*3.假设今天是星期日,编写一个程序,求123456天后是星期几*/
#include<stdio.h>
int main()
{
	int n=123456;
	n=n%7;
	printf("\n星期");
	switch(n)
	{
		case 0:printf("天");break;
		case 1:printf("一");break;
		case 2:printf("二");break;
		case 3:printf("三");break;
		case 4:printf("四");break;
		case 5:printf("五");break;
		case 6:printf("六");break;
	}
	printf("\n\n");
	return 0;
} 
