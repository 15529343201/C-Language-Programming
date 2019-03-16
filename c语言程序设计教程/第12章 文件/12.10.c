/*12.10.有5个学生,每个学生有3门课程的成绩,从键盘输入以上数据(包括学号、
姓名、3门课程的成绩),计算出平均成绩,将原有数据和计算出的平均分数存放在磁盘文件"stu_list"中。
*/
#include <stdio.h>

struct student
{
	char num[20];//学号
	char name[20];//姓名
	int s1,s2,s3;//三门课成绩
	double ave;//平均成绩
};

int main(void)
{
	struct student stu[5];
	FILE* fp;
	int i;
	printf ("请输入5名学生的学号、姓名、3门课的成绩,空格分隔,回车结束\n");
	for (i=0;i<5;i++)
		scanf ("%s %s %d %d %d",stu[i].num,stu[i].name,&stu[i].s1,&stu[i].s2,&stu[i].s3);
	for (i=0;i<5;i++)//计算平均成绩
		stu[i].ave=(stu[i].s1+stu[i].s2+stu[i].s3)/3.0;
	fp=fopen("stu_list.txt","w");//以"写"方式打开文件
	for (i=0;i<5;i++)
		fprintf (fp,"%s %s %d %d %d %lf\n",stu[i].num,stu[i].name,stu[i].s1,stu[i].s2,stu[i].s3,stu[i].ave);
	fclose(fp);
	return 0;
}

/*
请输入5名学生的学号、姓名、3门课的成绩,空格分隔,回车结束
1 shiyongchao 99 99 90
2 wangli 23 89 88
3 aierken 89 88 78
4 liuchencheng 88 23 37
5 hanyile 99 43 77
*/
 
