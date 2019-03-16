/*用关键字static定义的局部变量是静态局部变量,它存放在内存中的静态存储区中,
所占用的存储单元不释放直到整个程序运行结束。所以静态局部变量在函数调用结束
后仍保持原值,在下一次函数调用时,该变量的值,就是上一次函数调用结束时保存的值。*/
/*静态局部变量的初始化只在编译时进行一次,程序运行过程中不再重新进行初始化。
只有程序结束并再次运行程序时,静态局部变量才重新被赋初值。*/
/*虽然静态局部变量在函数调用结束后仍然存在,但它们仅能为定义它们的函数所使用,
其他函数不能使用*/ 
//例8.20.静态局部变量
#include<stdio.h>
int n=1;
func(){
	static int a=2;
	a+=2;//a=4 a=6
	++n;//n=2 n=3
	printf("func:n=%d a=%d\n",n,a);
}
int main(void){
	static int a; //静态局部变量,初始化为0
	printf("main:n=%d a=%d\n",n,a);
	func();
	a+=10;
	printf("main:n=%d a=%d\n",n,a);
	func();
	printf("main:n=%d a=%d\n",n,a);
	return 0;
} 

/*
main:n=1 a=0
func:n=2 a=4
main:n=2 a=10
func:n=3 a=6
main:n=3 a=10
*/
