/*д���ַ�����fputc(),�ú���ԭ�����¡�
int fputc(char ch,FILE *fp);
����Ϊ:���ַ�chд���ļ�ָ��fp��ָ���ļ���λ��,�ɹ�ʱ�����ַ���ASCII��,
ʧ��ʱ����EOF(��stdio.h��,���ų���EOF��ֵ����-1)������:
FILE *fp; fputc('a',fp);
(1)��д����ַ�������д����д��׷�ӷ�ʽ�򿪡�
(2)ÿд��һ���ַ�,�ļ��ڲ�λ��ָ������ƶ�һ���ֽڡ�
(3)fputc������һ������ֵ,��д��ɹ��򷵻�д����ַ�,���򷵻�һ��EOF��
*/
//��12.3.�Ӽ����������ַ���׷����д��ָ�����ļ���
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
	printf("д�ļ�����...\n");
	printf("������Ҫ���ļ�������·�����ļ���:");
	gets(filename);
	fp=fopen(filename,"a+");
	if(fp==NULL){
		printf("\n���ļ�ʧ��,%s���ܲ�����\n",filename);
		exit(1);
	}
	fno=fileno(fp);
	fsize=filelength(fno);
	printf("\n%s�ļ���!\n",filename);
	printf("\n�ļ���С%dBytes\n",fsize);
	printf("�ļ�����Ϊ:\n");
	while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
	while(1){
		printf("\n\n�����Ƿ�Ҫ�������(Y/N):");
		if(toupper(getche())=='Y'){
			printf("\n\n������Ҫ��ӵ�����:");
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
		printf("\n\n���ļ�ʧ��,%s���ܲ�����\n",filename);
		exit(1);
	}
	fno=fileno(fp);
	fsize=filelength(fno);
	printf("\n%s�ļ���!\n",filename);
	printf("\n�ļ���С%dBytes\n",fsize);
	printf("\n�ļ�����Ϊ:\n");
	while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
	fclose(fp);
	return 0;
} 

/*
д�ļ�����...
������Ҫ���ļ�������·�����ļ���:file.txt

file.txt�ļ���!

�ļ���С0Bytes
�ļ�����Ϊ:


�����Ƿ�Ҫ�������(Y/N):y

������Ҫ��ӵ�����:


�����Ƿ�Ҫ�������(Y/N):y

������Ҫ��ӵ�����:shiyongchaohelloworld!


�����Ƿ�Ҫ�������(Y/N):y

������Ҫ��ӵ�����:wanglihelloworld!


�����Ƿ�Ҫ�������(Y/N):a
file.txt�ļ���!

�ļ���С39Bytes

�ļ�����Ϊ:
shiyongchaohelloworld!wanglihelloworld!
*/
/*
д�ļ�����...
������Ҫ���ļ�������·�����ļ���:stu_new.txt

stu_new.txt�ļ���!

�ļ���С195Bytes
�ļ�����Ϊ:
03121244 uhu 87 89 98 91.333333
098 jerry 83 83 83 83.000000
03121245 jac 87 85 76 82.666667
03121241 tom 87 76 85 82.666667
03121243 jer 76 76 89 80.333333
03121256 who 87 65 89 80.333333


�����Ƿ�Ҫ�������(Y/N):y

������Ҫ��ӵ�����:shiyongchao


�����Ƿ�Ҫ�������(Y/N):y

������Ҫ��ӵ�����:wangli


�����Ƿ�Ҫ�������(Y/N):n
stu_new.txt�ļ���!

�ļ���С212Bytes

�ļ�����Ϊ:
03121244 uhu 87 89 98 91.333333
098 jerry 83 83 83 83.000000
03121245 jac 87 85 76 82.666667
03121241 tom 87 76 85 82.666667
03121243 jer 76 76 89 80.333333
03121256 who 87 65 89 80.333333
shiyongchaowangli
*/
