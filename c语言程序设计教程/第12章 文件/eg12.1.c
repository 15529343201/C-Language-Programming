/*打开文件:fopen函数原型如下。
FILE *fopen(char *filenmae,char *mode);
功能为:使用mode模式打开指定的filename文件。如打开文件成功,则返回一个FILE类型的指针;
打开文件失败,则返回NULL。
例如,打开一个和可执行文件在相同路径下的文本文件test.txt
FILE *fp;
fp=fopen("test.txt","r");
又如,打开一个E盘下code文件夹下的文本文件test.txt
方法1:FILE *fp; fp=fopen("e:\\code\\test.txt","rt");
方法2:FILE *fp; fp=fopen("e:/code/test.txt","rt");
(1)r(read):读 w(write):写 a(append):追加 t(text):文本文件,可省略不写 b(binary):二进制文件 +:读和写
(2)凡用"r"打开一个文件时,该文件必须已经存在,且只能从该文件读出。
(3)凡用"w"打开的文件只能向该文件写入。若打开的文件不存在,则以指定的文件名建立该文件,
   若打开的文件已经存在,则将该文件删去,重建一个新文件。
(4)若要向一个已存在的文件中追加新的信息,只能用"a"方式打开文件。若此时该文件不存在,则会新建一个文件。
关闭文件:fclose函数原型如下。
int fclose(FILE *fp);
功能为:将文件指针fp所指的文件关闭。若返回0,则表示关闭成功；若返回非0值则表示有错误发生。例如。fclose(fp)
获取文件的属性:
fileno函数原型如下。
int fileno(FILE *fp);
功能为:返回所打开文件指针fp对应的文件描述字(handle_no)。当打开文件成功后,操作系统会自动赋予一个号码,
此号码用来代表所打开的文件。所在头文件为stdlib.h。
filelength函数原型如下。
long filelength(int handle_no);
功能为:返回文件描述字(handle_no)对应的文件大小,以字节为单位。所在头文件为io.h。
*/
//例12.1.采用交互式文件方式打开指定的文件,若文件打开成功,则显示该文件的大小(Byte);若文件打开失败,则提示出错信息
#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#define LEN 100
int main()
{
	FILE *fp;
	char filename[LEN];
	int fno,fsize;
	printf("请输入要打开文件的完整路径名及文件名: ");
	gets(filename);
	fp=fopen(filename,"r");
	if(fp==NULL){
		printf("\n打开文件失败,%s可能不存在\n",filename);
		exit(1);
	}
	fno=fileno(fp);
	fsize=filelength(fno);
	printf("\n %s文件打开成功,文件大小%dBytes\n",filename,fsize);
	fclose(fp);
	return 0;
} 

/*
请输入要打开文件的完整路径名及文件名: stu_new.txt

stu_new.txt文件打开成功,文件大小195Bytes
*/
