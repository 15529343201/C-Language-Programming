/*按工资的高低纳税,已知不同工资s的税率p如下:
	s<1000 p=0%
	1000<=s<2000 p=5%
	2000<=s<3000 p=8%
	3000<=s<5000 p=10%
	5000<=s      p=15%
编一程序,输入工资数,求纳税款和实得工资数*/
#include<stdio.h>
int main()
{
	float s,p,t,sum;
	int m;
	printf("please input s:\n");
	scanf("%f",&s);
	m=s/1000;
	if(s>5000) m=5;
	switch(m){
		case 0:p=0;break;
		case 1:p=0.05;break;
		case 2:p=0.08;break;
		case 3:
		case 4:p=0.1;break;
		case 5:p=0.15;break;
	}
	t=s*p;
	sum=s-t;
	printf("tax=%f,pay=%f",t,sum);
	return 0;
} 
/*
please input s:
999
tax=0.000000,pay=999.000000
please input s:
1000
tax=50.000000,pay=950.000000
*/
