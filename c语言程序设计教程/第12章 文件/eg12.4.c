/*���ַ�������fgets(),�ú���ԭ�����¡�
char *fgets(char *str,int n,FILE *fp);
����Ϊ:���ļ�ָ��fp��ָ�ļ�λ�ö�ȡn���ַ�������str�ַ����顣����������ַ���ʱ����NULL.
д�ַ�������fputs(),�ú���ԭ�����¡�
int fputs(char *str,FILE *fp);
����Ϊ:���ַ���strд���ļ�ָ��fp��ָ�ļ���λ��,д�����ݳɹ�ʱ���ط�0ֵ��д��ʧ��ʱ����EOF��
*/
//��12.4.����fgets()������fputs()����������12.3
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
	while((fgets(temp,LEN,fp))!=NULL)
		printf("%s",temp);
	while(1){
		printf("\n\n�����Ƿ�Ҫ�������(Y/N):");
		if(toupper(getche())=='Y'){
			printf("\n\n������Ҫ��ӵ�����:");
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
		printf("\n\n���ļ�ʧ��,%s���ܲ�����\n",filename);
		exit(1);
	}
	fno=fileno(fp);
	fsize=filelength(fno);
	printf("\n%s�ļ���!\n",filename);
	printf("\n�ļ���С%dBytes\n",fsize);
	printf("\n�ļ�����Ϊ:\n");
	while((fgets(temp,LEN,fp))!=NULL)
		printf("%s",temp);
	fclose(fp);
	return 0;
}

/*
д�ļ�����...
������Ҫ���ļ�������·�����ļ���:stu_new.txt

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

�����Ƿ�Ҫ�������(Y/N):y

������Ҫ��ӵ�����:aierkenliuchencheng


�����Ƿ�Ҫ�������(Y/N):n
stu_new.txt�ļ���!

�ļ���С231Bytes

�ļ�����Ϊ:
03121244 uhu 87 89 98 91.333333
098 jerry 83 83 83 83.000000
03121245 jac 87 85 76 82.666667
03121241 tom 87 76 85 82.666667
03121243 jer 76 76 89 80.333333
03121256 who 87 65 89 80.333333
shiyongchaowangliaierkenliuchencheng
*/
