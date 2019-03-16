/*编写一个程序,建立一个test文本文件,向其中写入"Hello,world!"
字符串,然后显示该文件的内容。*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
int main()
{
	FILE *fp;
	char str[]="Hello,world!";
	char buf[30];
	if((fp=fopen("test.txt","w+"))==NULL){
		printf("不能建立test文件.\n");
		exit(0);
	}
	fwrite(str,strlen(str)+1,1,fp);
	fseek(fp,SEEK_SET,0);
	fread(buf,strlen(str)+1,1,fp);
	printf("%s\n",buf);
	fclose(fp);
	return 0;
} 

/*
Hello,world!
*/
