/*(1)��ʽ���ַ���������fscanf(),�ú�����ԭ�����¡�
int fscanf(FILE *fp,"��ʽ���ַ���",[�������ַ��]);
����Ϊ:���ļ�ָ��fp��ָ����ļ��а��ո�ʽ�ַ���ָ���ĸ�ʽ���ļ��е������͵�
�������ַ���С�����ȡ���ݳɹ��᷵������ȡ���ݵĸ���,�������ݰ���ָ����ʽ����
�ڴ��еı�����������,�ļ�ָ���Զ������ƶ�;����ȡʧ���򷵻�EOF��
(2)��ʽ���ַ���д����fprintf(),�ú�����ԭ�����¡�
int fprintf(FILE *fp,"��ʽ���ַ���",[������ַ��]);
����Ϊ:���������еı���ֵ���ո�ʽ�ַ���ָ���ĸ�ʽ������ļ�ָ��fp��ָ����ļ�λ��,
������,�򷵻�EOF*/
//��12.6.�Ӽ���������һ����30��ѧ�������ݲ����浽�����ļ���,�ٶ����ð�ѧ�������ݲ���ʾ����Ļ�ϡ�
#include<stdio.h>
#include<stdlib.h>
#define N 10
struct stu{
	char num[20];
	char name[40];
	char sex[5];
}class[N]; 

int main(){
	FILE *fp;
	int i;
	printf("\n����ð������:\n");
	fp=fopen("class_list.txt","wt");
	if(fp==NULL){
		printf("���ܴ򿪴��ļ�,��������˳�!");
		getch();
		exit(1);
	}
	for(i=0;i<N;i++){
		printf("\n��%d���˵���Ϣ:\n",i+1);
		printf("\nѧ��:");
		gets(class[i].num);
		printf("\n����:");
		gets(class[i].name);
		printf("\n�Ա�:");
		gets(class[i].sex);
		fprintf(fp,"%s %s %s\n",class[i].num,class[i].name,class[i].sex);
	} 
	fclose(fp);
	fp=fopen("class_list.txt","rt");
	printf("�ð�����Ϊ: \n");
	printf("ѧ��  ����  �Ա�\n");
	i=0;
	while(fscanf(fp,"%s %s %s",class[i].num,class[i].name,class[i].sex)!=EOF){
		printf("%s %s %s\n",class[i].num,class[i].name,class[i].sex);
		i++;
	}
	fclose(fp);
	return 0;
}

/*
����ð������:

��1���˵���Ϣ:

ѧ��:1

����:shiyongchao

�Ա�:nan

��2���˵���Ϣ:

ѧ��:2

����:aierken

�Ա�:nan

��3���˵���Ϣ:

ѧ��:3

����:hanyile

�Ա�:nan

��4���˵���Ϣ:

ѧ��:4

����:wangli

�Ա�:nan

��5���˵���Ϣ:

ѧ��:5

����:liuchencheng

�Ա�:nan

��6���˵���Ϣ:

ѧ��:6

����:wangyigui

�Ա�:nan

��7���˵���Ϣ:

ѧ��:7

����:jiaoqiqi

�Ա�:nv

��8���˵���Ϣ:

ѧ��:8

����:liulian

�Ա�:nv

��9���˵���Ϣ:

ѧ��:9

����:quanyue

�Ա�:nv

��10���˵���Ϣ:

ѧ��:10

����:nanjidong

�Ա�:nan
�ð�����Ϊ:
ѧ��  ����  �Ա�
1 shiyongchao nan
2 aierken nan
3 hanyile nan
4 wangli nan
5 liuchencheng nan
6 wangyigui nan
7 jiaoqiqi nv
8 liulian nv
9 quanyue nv
10 nanjidong nan
*/
