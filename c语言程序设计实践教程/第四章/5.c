/*编写一个程序,判断用户输入的字符是数字字符、字母字符还是其他字符*/
#include<stdio.h>
int main()
{
	char c;
	printf("please input a character:\n");
	scanf("%c",&c);
	if(c>='0'&&c<='9')
		printf("%c is digit.\n",c);
	else if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		printf("%c is character.\n",c);
	else
		printf("%c is other character.\n",c);
	return 0;
} 
