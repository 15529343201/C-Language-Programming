/*写单字符函数fputc(),该函数原型如下。
int fputc(char ch,FILE *fp);
功能为:把字符ch写入文件指针fp所指向文件的位置,成功时返回字符的ASCII码,
失败时返回EOF(在stdio.h中,符号常量EOF的值等于-1)。例如:
FILE *fp; fputc('a',fp);
(1)被写入的字符可以用写、读写、追加方式打开。
(2)每写入一个字符,文件内部位置指针向后移动一个字节。
(3)fputc函数有一个返回值,如写入成功则返回写入的字符,否则返回一个EOF。
*/
//例12.3.从键盘上输入字符串追加添写到指定的文件中
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<io.h>
#define LEN 100
int main(){
	FILE *fp;
	char filename[LEN],data[LEN];
	int fno,fsize,i;
	char ch;
	printf("写文件程序...\n");
	printf("请输入要打开文件的完整路径及文件名:");
	gets(filename);
	fp=fopen(filename,"a+");
	if(fp==NULL){
		printf("\n打开文件失败,%s可能不存在\n",filename);
		exit(1);
	}
	fno=fileno(fp);
	fsize=filelength(fno);
	printf("\n%s文件打开!\n",filename);
	printf("\n文件大小%dBytes\n",fsize);
	printf("文件内容为:\n");
	while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
	while(1){
		printf("\n\n请问是否要添加数据(Y/N):");
		if(toupper(getche())=='Y'){
			printf("\n\n请输入要添加的数据:");
			gets(data);
			for(i=0;i<strlen(data);i++)
				fputc(data[i],fp);
		}
		else{
			fclose(fp);
			break;
		}
	}
	fp=fopen(filename,"rt");
	if(fp==NULL){
		printf("\n\n打开文件失败,%s可能不存在\n",filename);
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
写文件程序...
请输入要打开文件的完整路径及文件名:file.txt

file.txt文件打开!

文件大小0Bytes
文件内容为:


请问是否要添加数据(Y/N):y

请输入要添加的数据:


请问是否要添加数据(Y/N):y

请输入要添加的数据:shiyongchaohelloworld!


请问是否要添加数据(Y/N):y

请输入要添加的数据:wanglihelloworld!


请问是否要添加数据(Y/N):a
file.txt文件打开!

文件大小39Bytes

文件内容为:
shiyongchaohelloworld!wanglihelloworld!
*/
/*
写文件程序...
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


请问是否要添加数据(Y/N):y

请输入要添加的数据:shiyongchao


请问是否要添加数据(Y/N):y

请输入要添加的数据:wangli


请问是否要添加数据(Y/N):n
stu_new.txt文件打开!

文件大小212Bytes

文件内容为:
03121244 uhu 87 89 98 91.333333
098 jerry 83 83 83 83.000000
03121245 jac 87 85 76 82.666667
03121241 tom 87 76 85 82.666667
03121243 jer 76 76 89 80.333333
03121256 who 87 65 89 80.333333
shiyongchaowangli
*/
