/*(1)格式化字符串读函数fscanf(),该函数的原型如下。
int fscanf(FILE *fp,"格式化字符串",[输入项地址表]);
功能为:从文件指针fp所指向的文件中按照格式字符串指定的格式将文件中的数据送到
输入项地址表中。若读取数据成功会返回所读取数据的个数,并将数据按照指定格式存入
内存中的变量或数组中,文件指针自动向下移动;若读取失败则返回EOF。
(2)格式化字符串写函数fprintf(),该函数的原型如下。
int fprintf(FILE *fp,"格式化字符串",[输出项地址表]);
功能为:将输出项表中的变量值按照格式字符串指定的格式输出到文件指针fp所指向的文件位置,
若出错,则返回EOF*/
//例12.6.从键盘上输入一个班30个学生的数据并保存到磁盘文件中,再读出该班学生的数据并显示在屏幕上。
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
	printf("\n输入该班的数据:\n");
	fp=fopen("class_list.txt","wt");
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
		fprintf(fp,"%s %s %s\n",class[i].num,class[i].name,class[i].sex);
	} 
	fclose(fp);
	fp=fopen("class_list.txt","rt");
	printf("该班数据为: \n");
	printf("学号  姓名  性别\n");
	i=0;
	while(fscanf(fp,"%s %s %s",class[i].num,class[i].name,class[i].sex)!=EOF){
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

性别:nan

第2个人的信息:

学号:2

姓名:aierken

性别:nan

第3个人的信息:

学号:3

姓名:hanyile

性别:nan

第4个人的信息:

学号:4

姓名:wangli

性别:nan

第5个人的信息:

学号:5

姓名:liuchencheng

性别:nan

第6个人的信息:

学号:6

姓名:wangyigui

性别:nan

第7个人的信息:

学号:7

姓名:jiaoqiqi

性别:nv

第8个人的信息:

学号:8

姓名:liulian

性别:nv

第9个人的信息:

学号:9

姓名:quanyue

性别:nv

第10个人的信息:

学号:10

姓名:nanjidong

性别:nan
该班数据为:
学号  姓名  性别
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
