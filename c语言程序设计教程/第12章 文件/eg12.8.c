/*1.rewind()����
�ú���ԭ�����¡�
void rewind(FILE *fp);
����Ϊ�����ļ��ڲ���λ��ָ���Ƶ��ļ��Ŀ�ʼλ��
*/
//��12.8.ʵ�����Ѵ��ڵ�ָ���ļ�ĩβ׷��һ���ɴ��ո���ַ�����
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *fp;
	char ch,str[20];
	fp=fopen("string.txt","at+");
	if(fp==NULL){
		printf("���ܴ򿪴��ļ�,��������˳�!");
		getch();
		exit(1);
	}
	printf("������һ���ַ���:\n");
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
������һ���ַ���:
aierkendashabi !!!
!!acccddeeeegghhhhhhiilllllllnnnoooooorrsuwwyaierkendashabi !!!
*/
