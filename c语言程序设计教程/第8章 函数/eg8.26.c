//��8.25.ʵ��ϵͳ�ṩ���ַ������ƺ���strcpy()��ȫ�����ܡ�
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

