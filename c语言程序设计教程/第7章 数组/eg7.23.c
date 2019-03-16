/*例7.23.利用指向分数组的指针变量,输入多个字符串,将它们
按行存储在二维字符数组中,然后输出全部字符串*/
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
