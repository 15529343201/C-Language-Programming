/*存储类别小结
					自动局部变量	静态局部变量	寄存器变量	静态全局变量	非静态全局变量
存储区				动态区			静态区			寄存器		静态区			静态区
函数结束时变量值	消失			保存			消失		保存			保存
未初始化变量默认值 	不定			0				不定		0				0
作用域				本函数			本函数			本函数		本文件			整个程序*/
#include<stdio.h>
#include "sub.c"
int x=10;
int y=10;
add(){
	y=10+x;
	x=x*2;
}
int main(void){
	extern sub();//对外部函数sub进行引用声明 
	x=x+5;//x=15
	add();//y=25,x=30
	sub();//x=25
	printf("x=%d,y=%d\n",x,y);
	return 0;
}  

/*
x=25,y=25
*/
