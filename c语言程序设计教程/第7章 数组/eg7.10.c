/*字符数组
1.一维字符数组的定义和引用
  1.定义格式:char c[10]={'d','o','g'};
  (1)初始化时如果元素初值列表给出的字符数小于定义的元素数,则后面自动补ASCII码为
0的字符'\0',在字符串处理中字符'\0'作为字符串结束符。如果给出的字符数大于数组元素
数,则编译时出语法错误。若给出的字符数恰好等于元素数,则不会自动补'\0'。
  (2)可去掉定义时的元素数
  char d[]={'I','','a','m','','a','','b','o','y',''}; 
  数组d的长度为11,后面不会自动加字符串结束符'\0' 
  2.通过字符串初始化
  (1)将字符串常量放在初始化的花括号内。例如:
  char d[30]={"I am a boy."}; 
  数组d的长度为30,d[0]~d[10]存放有效字符,d[11]自动存放'\0'。该字符串的有效长度为12.
  (2)也可以省略花括号{},直接写为:
  char d[30]="I am a boy.";
  可以去掉定义时的长度设置:
  char d[]="I am a boy.";
  或
  char d[]={"I am a boy.";}
  系统会自动加'\0',元素数为双引号内的有效字符数加1,字符数组d的长度为11+1,d[12]存放
  '\0'。所以在定义字符数组时,定义的元素数一定要大于实际使用的有效长度。
  (3)如果使用独立的字符初始化,并去掉定义时的长度设置,并使字符数组存储字符串,则应在
  最后增加字符串结束符'\0'。
  char g[]={'I','','a','m','','a','','g','i','r','l','.','\0'}; 
  数组g的长度为13,有字符串结束符'\0'. 
2.字符数组的输入与输出
  1.用格式符%c逐个输入和输出字符 
  用此法输入时系统不会自动加'\0',输出时也不自动检测'\0'。因此要使用字符串输出函数,
  则应该自己加上'\0'。
  2.用格式串%s整体输入字符串
  (1)char str[20]; scanf("%s",str); 不用加地址符&
  (2)由于是整体输入,所以在输入字符串的末尾,系统会自动加上'\0'
  (3)输入多个字符串,可用空格隔开。
     char str1[15],str2[15],str3[15];
	 scanf("%s%s%s",str1,str2,str3);
	 若输入How are you! 则str1,str2,str3的内容分别为"How","are","you!"
  3.用格式符%s整体输出字符数组
  (1)遇到'\0'即输出结束。
  (2)如果数组中有多个'\0',输出时遇到第一个'\0'即结束
  (3)如果数组中没有'\0',用此格式整体输出数组时会将内存中该数组之后的内容一并输出,
  直到遇见第一个'\0'为止.例如:
  char str[]={'H','e','l','l','o'};
  printf("%s",str); 输出结果在Hello之后可能还有其他内容
在c语言中,最常用的字符数组是字符串,字符串是存放在一个字符数组中,存放一个字符串的
字符数组是一维字符数组。一维字符数组不等于字符串,字符串是一维字符数组。如果该字符
数组以'\0'结束,则是字符串,否则不是字符串,而是一般字符数组。例如：
char s1[3]={'a','b','c'};
char s2[3]={'a','b','\0'}; 
其中,s2是一个字符串,而s1是一般的一维字符数组。
只有字符数组可以整体输入和输出,其他类型的数组都不能整体输入和输出。 
*/
#include<stdio.h>
#include<string.h>
int main(void){
	char d[20];
	int i;
	printf("please input 10 char:\n");
	for(i=0;i<10;i++)
		scanf("%c",&d[i]);
	d[i]='\0';
	for(i=0;i<10;i++)
		printf("%c",d[i]);
	printf("\n");
	printf("%s",d); 
	return 0;
}

/*
please input 10 char:
I am a boy
I am a boy
I am a boy
*/
