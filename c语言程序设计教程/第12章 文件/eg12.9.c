/*2.fseek()函数
该函数的原型如下。int fseek(FILE *fp,long offset,int whence);
功能为:文件指针由whence地址移到offset的地址。
文件头0:SEEK_SET
当前位置1:SEEK_CUR
文件尾2:SEEK_END
例如,读取文件中第n个记录的数据
rewind(fp);
fseek(fp,sizeof(struct stu)*n,0);
fread(&student,sizeof(struct stu),1,fp);
又如，更新文件中第n个记录的数据的程序如下。
rewind(fp)
fseek(fp,sizeof(struct stu)*n,0);
fwrite(&student,sizeof(struct stu),1,fp);
其意义是把文件指针由0地址后移n个数据记录的地址,将student中的数据
写入当前文件指针所指的数据记录中。*/
//例12.9.在例12.7中的class_list.txt学生文件中读出第二个学生的数据。
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
		printf("不能打开此文件,按任意键退出!");
		getch();
		exit(1);
	}
	fseek(fp,i*sizeof(struct stu),0);
	fread(&q,sizeof(struct stu),1,fp);
	printf("\n该班第二个学生的数据信息为: ");
	printf("\n\n学号 姓名  性别\n");
	printf("%s %s %s\n",q.num,q.name,q.sex);
	return 0;
} 
