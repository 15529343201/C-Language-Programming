/*2.fseek()����
�ú�����ԭ�����¡�int fseek(FILE *fp,long offset,int whence);
����Ϊ:�ļ�ָ����whence��ַ�Ƶ�offset�ĵ�ַ��
�ļ�ͷ0:SEEK_SET
��ǰλ��1:SEEK_CUR
�ļ�β2:SEEK_END
����,��ȡ�ļ��е�n����¼������
rewind(fp);
fseek(fp,sizeof(struct stu)*n,0);
fread(&student,sizeof(struct stu),1,fp);
���磬�����ļ��е�n����¼�����ݵĳ������¡�
rewind(fp)
fseek(fp,sizeof(struct stu)*n,0);
fwrite(&student,sizeof(struct stu),1,fp);
�������ǰ��ļ�ָ����0��ַ����n�����ݼ�¼�ĵ�ַ,��student�е�����
д�뵱ǰ�ļ�ָ����ָ�����ݼ�¼�С�*/
//��12.9.����12.7�е�class_list.txtѧ���ļ��ж����ڶ���ѧ�������ݡ�
#include<stdio.h>
#include<stdlib.h>
struct stu{
	char num[20];
	char name[40];
	char sex[5];
}q;

int main(){
	FILE *fp;
	int i=1;
	fp=fopen("class_list.txt","rt");
	if(fp==NULL){
		printf("���ܴ򿪴��ļ�,��������˳�!");
		getch();
		exit(1);
	}
	fseek(fp,i*sizeof(struct stu),0);
	fread(&q,sizeof(struct stu),1,fp);
	printf("\n�ð�ڶ���ѧ����������ϢΪ: ");
	printf("\n\nѧ�� ����  �Ա�\n");
	printf("%s %s %s\n",q.num,q.name,q.sex);
	return 0;
} 
