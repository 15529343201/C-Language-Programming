/*3.ftell()函数
ftell()函数的作用是得到流式文件的当前位置,用相对于文件开头的位移量
来表示。由于文件中的位置指针经常移动,人们往往不容易知道其当前位置。
用ftell()函数即可以得到当前位置。如果ftell()函数返回值为-1L,表示出错。
例如:i=ftell(fp); if(i==-1L) printf("Error!\n"); 
*/
/*feof()函数 该函数的原型如下。 int feof(FILE *fp)
功能:判断文件指针fp是否处于文件结束位置,如文件结束,则返回值为1,否则为0
*/
//例12.10.将例12.7改为如下程序段
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
	printf("\n输入该班的数据:\n");
	fp=fopen("class_list1.txt","wt");
	if(fp==NULL){
		printf("不能打开此文件,按任意键退出!");
		getch();
		exit(1);
	}
	for(i=0;i<N;i++){
		printf("\n第%d个人的信息:\n",i+1);
		printf("\n学号:");
		gets(class[i].num);
		printf("\n姓名:");
		gets(class[i].name);
		printf("\n性别:");
		gets(class[i].sex);
		fwrite(&class[i],sizeof(struct stu),1,fp);
	} 
	fclose(fp);
	fp=fopen("class_list1.txt","rt");
	printf("该班数据为: \n");
	printf("学号  姓名  性别\n");
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
输入该班的数据:

第1个人的信息:

学号:1

姓名:shiyongchao

性别:m

第2个人的信息:

学号:2

姓名:wangli

性别:m

第3个人的信息:

学号:3

姓名:aierken

性别:m

第4个人的信息:

学号:4

姓名:liuchencheng

性别:m

第5个人的信息:

学号:5

姓名:hanyile

性别:m
该班数据为:
学号  姓名  性别
1 shiyongchao m
2 wangli m
3 aierken m
4 liuchencheng m
5 hanyile m
*/
