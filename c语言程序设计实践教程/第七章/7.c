#include<stdio.h>
#include "add2.c"
static int x;
int y=3;
extern add2();
add1(){
	x+=2;//x=12 x=24
	y+=3;//y=6 y=11
	printf("add1:x=%d,y=%d\n",x,y);
}
int main(void){
	add1();
	add2();
	add1();
	add2();
	printf("x=%d,y=%d\n",x,y); //x=34,y=13
	return 0;
}
/*
add1:x=12,y=6
add2:x=22,y=8
add1:x=24,y=11
add2:x=34,y=13
x=34,y=13
*/
