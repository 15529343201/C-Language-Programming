/*���ַ���д����
�ַ���д���������ַ�(�ֽ�)Ϊ��λ�Ķ�д������ÿ�οɴ��ļ����������ļ�д��һ���ַ���
(1)�����ַ�����fgetc(),�ú�����ԭ�����¡�
int fgetc(FILE *fp);
����Ϊ:��ȡ�ļ�ָ��fpĿǰ��ָ�ļ�λ���е��ַ�,��ȡ���,�ļ�ָ���Զ�������һ���ַ�λ��,
���ļ�ָ���Ѿ����ļ���β,����-1,����:ch=fgetc(fp);
*/
//��12.2.����12.1�е��ļ�������ʾ������
#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#define LEN 100
int main(){
	FILE *fp;
	char filename[LEN];
	int fno,fsize;
	char ch;
	printf("������Ҫ���ļ�������·�����ļ���:");
	gets(filename);
	fp=fopen(filename,"rt");
	if(fp==NULL){
		printf("\n���ļ�ʧ��,%s���ܲ�����\n",filename);
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
*/
