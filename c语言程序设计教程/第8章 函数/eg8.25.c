/*����ָ��ֵ�ĺ���
������ *������(������) ����:int *f(int x)
f�Ǻ�����,�������ܷ���һ��ָ�����͵�ָ��ֵ��
f����()���,����f()�Ǻ�����ʽ�����������ǰ����һ��*,��ʾ�˺�������ֵΪָ�����͡�
��ǰ���int��ʾ����ֵ��������ָ�����ͱ�����ָ�����͡�*/
//��8.25.ʵ��ϵͳ�ṩ���ַ������ƺ���strcpy()��ȫ�����ܡ�
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
