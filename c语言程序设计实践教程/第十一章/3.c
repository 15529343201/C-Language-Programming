/*��дһ������,����һ��test�ı��ļ�,������д��"Hello,world!"
�ַ���,Ȼ����ʾ���ļ������ݡ�*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
int main()
{
	FILE *fp;
	char str[]="Hello,world!";
	char buf[30];
	if((fp=fopen("test.txt","w+"))==NULL){
		printf("���ܽ���test�ļ�.\n");
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
