//例8.25.实现系统提供的字符串复制函数strcpy()的全部功能。
#include<stdio.h>
char *strcat(char *s1,char *s2){
	char *p=s1;
	while(*s1)
		s1++;
	while(*s1++=*s2++);
	return p;
}
int main(void){
	char s[40]="Hello, ";
	printf("%s\n",strcat(s,"Welcome to you!"));
	return 0;
} 

/*
Hello, Welcome to you!
*/

