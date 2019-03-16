/*单字符读写函数
字符读写函数是以字符(字节)为单位的读写函数。每次可从文件读出或向文件写入一个字符。
(1)读单字符函数fgetc(),该函数的原型如下。
int fgetc(FILE *fp);
功能为:读取文件指针fp目前所指文件位置中的字符,读取完毕,文件指针自动往下移一个字符位置,
若文件指针已经到文件结尾,返回-1,例如:ch=fgetc(fp);
*/
//例12.2.将例12.1中的文件内容显示出来。
#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#define LEN 100
int main(){
	FILE *fp;
	char filename[LEN];
	int fno,fsize;
	char ch;
	printf("请输入要打开文件的完整路径及文件名:");
	gets(filename);
	fp=fopen(filename,"rt");
	if(fp==NULL){
		printf("\n打开文件失败,%s可能不存在\n",filename);
		exit(1);
	}
	fno=fileno(fp);
	fsize=filelength(fno);
	printf("\n%s文件打开!\n",filename);
	printf("\n文件大小%dBytes\n",fsize);
	printf("\n文件内容为:\n");
	while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
	fclose(fp);
	return 0;
} 
/*
请输入要打开文件的完整路径及文件名:stu_new.txt

stu_new.txt文件打开!

文件大小195Bytes

文件内容为:
03121244 uhu 87 89 98 91.333333
098 jerry 83 83 83 83.000000
03121245 jac 87 85 76 82.666667
03121241 tom 87 76 85 82.666667
03121243 jer 76 76 89 80.333333
03121256 who 87 65 89 80.333333
*/
