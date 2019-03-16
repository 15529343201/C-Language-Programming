/*返回指针值的函数
类型名 *函数名(参数表) 例如:int *f(int x)
f是函数名,调用它能返回一个指向整型的指针值。
f先与()结合,表明f()是函数形式。而这个函数前面有一个*,表示此函数返回值为指针类型。
最前面的int表示返回值的类型是指向整型变量的指针类型。*/
//例8.25.实现系统提供的字符串复制函数strcpy()的全部功能。
#include<stdio.h>
char *strcpy(char *s1,char *s2){
	char *p=s1;
	while(*s1++=*s2++);
	return p;
}
int main(void){
	char s[20];
	printf("%s\n",strcpy(s,"Welcome to you!"));
	return 0;
} 

/*
Welcome to you!
*/
