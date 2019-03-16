/*1.rewind()函数
该函数原型如下。
void rewind(FILE *fp);
功能为：将文件内部的位置指针移到文件的开始位置
*/
//例12.8.实现在已存在的指定文件末尾追加一个可带空格的字符串。
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *fp;
	char ch,str[20];
	fp=fopen("string.txt","at+");
	if(fp==NULL){
		printf("不能打开此文件,按任意键退出!");
		getch();
		exit(1);
	}
	printf("请输入一个字符串:\n");
	gets(str);
	fwrite(str,strlen(str),1,fp);
	rewind(fp);
	ch=fgetc(fp);
	while(ch!=EOF){
		putchar(ch);
		ch=fgetc(fp);
	}
	printf("\n");
	fclose(fp);
	return 0;
} 
/*
请输入一个字符串:
aierkendashabi !!!
!!acccddeeeegghhhhhhiilllllllnnnoooooorrsuwwyaierkendashabi !!!
*/
