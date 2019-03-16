#include<stdio.h>
int main(void){
	int a=1,b=2,c=3;
	a++;//a=2
	c+=++b;//b=3,c=6
	{
		int b=4,c;
		c=b*3;//c=12
		a+=c;//a=14
		printf("first:a=%d,b=%d,c=%d\n",a,b,c);//14,4,12
		c+=c;//c=24
		printf("second:a=%d,b=%d,c=%d\n",a,b,c);//14,4,24
	}
	printf("third:a=%d,b=%d,c=%d\n",a,b,c);//14,3,6
	return 0;
}
/*
first:a=14,b=4,c=12
second:a=14,b=4,c=24
third:a=14,b=3,c=6
*/
