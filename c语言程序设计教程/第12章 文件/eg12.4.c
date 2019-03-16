/*读字符串函数fgets(),该函数原型如下。
char *fgets(char *str,int n,FILE *fp);
功能为:在文件指针fp所指文件位置读取n个字符并放入str字符数组。如果读不到字符串时返回NULL.
写字符串函数fputs(),该函数原型如下。
int fputs(char *str,FILE *fp);
功能为:将字符串str写入文件指针fp所指文件的位置,写入数据成功时返回非0值，写入失败时返回EOF。
*/
//例12.4.利用fgets()函数和fputs()函数重做例12.3
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<io.h>
#define LEN 100
int main(){
	FILE *fp;
	char filename[LEN],data[LEN],temp[LEN];
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
	while((fgets(temp,LEN,fp))!=NULL)
		printf("%s",temp);
	while(1){
		printf("\n\n请问是否要添加数据(Y/N):");
		if(toupper(getche())=='Y'){
			printf("\n\n请输入要添加的数据:");
			gets(data);
			fputs(data,fp);
		}
		else{
			fclose(fp);
			break;
		}
	}
	fp=fopen(filename,"r");
	if(fp==NULL){
		printf("\n\n打开文件失败,%s可能不存在\n",filename);
		exit(1);
	}
	fno=fileno(fp);
	fsize=filelength(fno);
	printf("\n%s文件打开!\n",filename);
	printf("\n文件大小%dBytes\n",fsize);
	printf("\n文件内容为:\n");
	while((fgets(temp,LEN,fp))!=NULL)
		printf("%s",temp);
	fclose(fp);
	return 0;
}

/*
写文件程序...
请输入要打开文件的完整路径及文件名:stu_new.txt

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

请问是否要添加数据(Y/N):y

请输入要添加的数据:aierkenliuchencheng


请问是否要添加数据(Y/N):n
stu_new.txt文件打开!

文件大小231Bytes

文件内容为:
03121244 uhu 87 89 98 91.333333
098 jerry 83 83 83 83.000000
03121245 jac 87 85 76 82.666667
03121241 tom 87 76 85 82.666667
03121243 jer 76 76 89 80.333333
03121256 who 87 65 89 80.333333
shiyongchaowangliaierkenliuchencheng
*/
