/*12.10.��5��ѧ��,ÿ��ѧ����3�ſγ̵ĳɼ�,�Ӽ���������������(����ѧ�š�
������3�ſγ̵ĳɼ�),�����ƽ���ɼ�,��ԭ�����ݺͼ������ƽ����������ڴ����ļ�"stu_list"�С�
*/
#include <stdio.h>

struct student
{
	char num[20];//ѧ��
	char name[20];//����
	int s1,s2,s3;//���ſγɼ�
	double ave;//ƽ���ɼ�
};

int main(void)
{
	struct student stu[5];
	FILE* fp;
	int i;
	printf ("������5��ѧ����ѧ�š�������3�ſεĳɼ�,�ո�ָ�,�س�����\n");
	for (i=0;i<5;i++)
		scanf ("%s %s %d %d %d",stu[i].num,stu[i].name,&stu[i].s1,&stu[i].s2,&stu[i].s3);
	for (i=0;i<5;i++)//����ƽ���ɼ�
		stu[i].ave=(stu[i].s1+stu[i].s2+stu[i].s3)/3.0;
	fp=fopen("stu_list.txt","w");//��"д"��ʽ���ļ�
	for (i=0;i<5;i++)
		fprintf (fp,"%s %s %d %d %d %lf\n",stu[i].num,stu[i].name,stu[i].s1,stu[i].s2,stu[i].s3,stu[i].ave);
	fclose(fp);
	return 0;
}

/*
������5��ѧ����ѧ�š�������3�ſεĳɼ�,�ո�ָ�,�س�����
1 shiyongchao 99 99 90
2 wangli 23 89 88
3 aierken 89 88 78
4 liuchencheng 88 23 37
5 hanyile 99 43 77
*/
 
