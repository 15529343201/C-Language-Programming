/*(1)���ݿ������fread(),�ú�����ԭ�����¡�
int fread(void *buffer,int size,int count,FILE *fp);
����Ϊ:���ļ�ָ��fp��ָ����ļ��ĵ�ǰλ�ÿ�ʼ,һ�ζ���size���ֽ�,�ظ�count��,
������ȡ�������ݴ浽buffer��ʼ���ڴ�����,ͬʱ����дλ��ָ�����size*count�Ρ�
�ú����ķ���ֵ��ʵ�ʶ�ȡ��countֵ��
	buffer:��һ��ָ��,��fread��������,����ʾ��Ŷ������ݵ��׵�ַ(������ںδ�)��
��fwrite������,����ʾҪ������������ڴ��е��׵�ַ(���Ӻδ���ʼ�洢)��
	size:��ʾ���ݿ���ֽ�����
	count:��ʾҪ��д�����ݿ���
	fp:��ʾ�ļ�ָ�롣
����:float fa[5]; fread(fa,4,5,fp);
�������Ǵ�fp��ָ���ļ���,ÿ�ζ�4���ֽ�(һ��ʵ��)����ʵ������fa��,������5��,
����5��ʵ����fa�С�
(2)���ݿ�д����fwrite(),�ú�����ԭ�����¡�
int fwrite(void *buffer,int size,int count,FILE *fp);
����Ϊ:��buffer��ָ���ڴ�����ʼ,һ�����size���ֽ�,�ظ�count��,�������������
����fp��ָ����ļ���,ͬʱ����дλ��ָ�����size*count�Ρ�
*/
//��12.7.����fread()��fwrite()����ʵ��12.6
#include<stdio.h>
#include<stdlib.h>
#define N 5
struct stu{
	char num[20];
	char name[40];
	char sex[5];
}class[N]; 

int main(){
	FILE *fp;
	int i;
	printf("\n����ð������:\n");
	fp=fopen("class_list1.txt","wt");
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
		fwrite(&class[i],sizeof(struct stu),1,fp);
	} 
	fclose(fp);
	fp=fopen("class_list1.txt","rt");
	printf("�ð�����Ϊ: \n");
	printf("ѧ��  ����  �Ա�\n");
	i=0;
	while(fread(&class[i],sizeof(struct stu),1,fp)==1){
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

�Ա�:m

��2���˵���Ϣ:

ѧ��:2

����:wangli

�Ա�:m

��3���˵���Ϣ:

ѧ��:3

����:jiaoqiqi

�Ա�:f

��4���˵���Ϣ:

ѧ��:4

����:liuxin

�Ա�:f

��5���˵���Ϣ:

ѧ��:5

����:lihao

�Ա�:m
�ð�����Ϊ:
ѧ��  ����  �Ա�
1 shiyongchao m
2 wangli m
3 jiaoqiqi f
4 liuxin f
5 lihao m
*/
