/*3.ftell()����
ftell()�����������ǵõ���ʽ�ļ��ĵ�ǰλ��,��������ļ���ͷ��λ����
����ʾ�������ļ��е�λ��ָ�뾭���ƶ�,��������������֪���䵱ǰλ�á�
��ftell()���������Եõ���ǰλ�á����ftell()��������ֵΪ-1L,��ʾ����
����:i=ftell(fp); if(i==-1L) printf("Error!\n"); 
*/
/*feof()���� �ú�����ԭ�����¡� int feof(FILE *fp)
����:�ж��ļ�ָ��fp�Ƿ����ļ�����λ��,���ļ�����,�򷵻�ֵΪ1,����Ϊ0
*/
//��12.10.����12.7��Ϊ���³����
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
	while(!feof(fp)){
		fread(&class[i],sizeof(struct stu),1,fp);
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

����:aierken

�Ա�:m

��4���˵���Ϣ:

ѧ��:4

����:liuchencheng

�Ա�:m

��5���˵���Ϣ:

ѧ��:5

����:hanyile

�Ա�:m
�ð�����Ϊ:
ѧ��  ����  �Ա�
1 shiyongchao m
2 wangli m
3 aierken m
4 liuchencheng m
5 hanyile m
*/
