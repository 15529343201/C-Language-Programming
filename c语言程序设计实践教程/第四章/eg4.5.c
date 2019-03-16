/*例4.5.输入一个正整数x,若x满足0<x<32767,则输出x是几位数
并输出x个位上的数字。*/
#include<stdio.h>
int main()
{
	int n,x,t;
	printf("enter a number:\n");
	scanf("%d",&x);
	if(x>0&&x<32767){
		if(x/10==0) n=1;
		else if(x/100==0) n=2;
		else if(x/1000==0) n=3;
		else if(x/10000==0) n=4;
		else n=5;
		t=x%10;
		printf("x=%d位数:%d个位数字:%d\n",x,n,t);
	}
	else printf("Enter Error!");	
} 
/*
enter a number:
12345
x=12345位数:5个位数字:5
*/
