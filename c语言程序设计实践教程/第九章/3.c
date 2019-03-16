/*编写函数,通过指针将一个字符串反向*/
#include<stdio.h>

void revert(char *s){
	char *p=s,c;
	while(*p)
		p++;
	p--;
	while(s<p){
		c=*s;
		*s++=*p;
		*p--=c;
	}
}

int main()
{
	char a[50];
	printf("Enter string:\n");
	scanf("%s",a);
	revert(a);
	printf("a=%s",a);
	return 0;
} 

/*
Enter string:
shiyongchao
a=oahcgnoyihs
*/
