/*��7.23.����ָ��������ָ�����,�������ַ���,������
���д洢�ڶ�ά�ַ�������,Ȼ�����ȫ���ַ���*/
#include<stdio.h>
int main(void){
	char a[4][20];
	char (*p)[20];
	printf("Input strings:\n");
	for(p=a;p<a+4;p++)
		gets(*p);
	printf("Output strings:\n");
	for(p=a;p<a+4;p++)
		printf("%s ",*p);
	return 0;
} 

/*
Input strings:
one
two
three
four
Output strings:
one two three four
*/
