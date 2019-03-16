/*雨水淋湿了算术书的一道题,8个数字只能看清3个,第一个数字虽然看不清，
但可以看出不是1.编程求出其余数字是什么。[aX(b3+c)]^2=8de9*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	for(a=2;a<=9;a++)
	for(b=0;b<=9;b++)
	for(c=0;c<=9;c++)
	for(d=0;d<=9;d++)
	for(e=0;e<=9;e++)
	if(a*(b*10+3+c)*a*(b*10+3+c)==8009+d*100+e*10)
		printf("%2d%2d%2d%2d%2d",a,b,c,d,e);
	return 0;
} 
/*
 3 2 8 6 4
*/
