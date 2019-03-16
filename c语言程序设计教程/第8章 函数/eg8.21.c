/*函数中的局部变量,如不用关键字static声明存储类别,它就是自动变量,自动变量存放在
动态存储区中。如果自动变量的定义没有赋初值,每次调用函数时都必须重新给它赋值,然后
才能引用,否则该变量的值为随机的不定值。
不加关键字static的局部变量都属于自动变量,此外还可以用关键字auto作自动类型说明。*/
/*(1)复合语句中说明的变量及函数的形参变量均属于自动局部变量
(2)全局变量不能是自动变量
(3)若不对自动变量赋初值,则其值是随机的。*/ 
//例8.21.自动变量的应用 
#include<stdio.h>
void func(int n){
	auto int a=2;
	a+=2;//a=4 a=4
	++n;//n=2 n=3
	printf("func:n=%d a=%d\n",n,a);
}
int main(void){
	int a=0;
	func(1);
	printf("main:n=1 a=%d\n",a);
	a+=10;
	func(2);
	printf("main:n=1 a=%d\n",a);
	return 0;
} 

/*
func:n=2 a=4
main:n=1 a=0
func:n=3 a=4
main:n=1 a=10
*/

