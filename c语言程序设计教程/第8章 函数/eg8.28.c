/*指向函数的指针变量
c语言中,每个函数在编译时都分配了一段连续的内存空间和一个入口地址,这个入口地址就称为"指向函数的指针",
简称函数指针。可以用变量来存储函数指针,称为"指向函数的指针变量"或函数指针变量。
类型说明符(*变量名)(); "*变量名"用圆括号括起来,表示该变量名首先被定义为指针变量;其后的空括号()表示
该指针变量所指向的是一个函数;最前面的"类型说明符",则定义了该函数的返回值的类型。例如:int (*p)();
  定义p是一个指向函数的指针变量,该函数的返回值是整型。表示p是专门用来存放整型函数的入口地址,但定义时它
并不指向哪一个具体的函数,而是空指针。
  要想通过p实现对函数的调用,就必须让p指向一个具体的函数,即将某一个函数的入口地址赋给它。函数名就代表函数的
入口地址,是函数指针类型的符号常量。例如p=fname;
  赋值后就可以通过p调用所指向的函数fname。通过指针变量调用函数时,只要在应出现函数名的地方,用"(*指针变量名)"
来代替函数名就可以了,函数名后的括号和实参表应照写不误。*/
//例8.28.求自然数1~n的奇数和或偶数和,用指向函数的指针变量实现。
#include<stdio.h>
int evensum(int n){ //偶数和 
	int i,sum=0;
	for(i=2;i<=n;i+=2)
		sum+=i;
	return sum;
}
int oddsum(int n){ //奇数和 
	int i,sum=0;
	for(i=1;i<=n;i+=2)
		sum+=i;
	return sum;
}
int main(void){
	int n,sum,flag;
	int (*p)(int);
	printf("input n:");
	scanf("%d",&n);
	printf("input flag(0 or 1):");
	scanf("%d",&flag);
	if(flag==1) p=oddsum;
	else p=evensum;
	sum=(*p)(n);
	printf("sum=%d\n",sum);
	return 0;
} 

/*
input n:10
input flag(0 or 1):0
sum=30
input n:10
input flag(0 or 1):1
sum=25
*/
