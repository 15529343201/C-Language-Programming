/*(1)数据块读函数fread(),该函数的原型如下。
int fread(void *buffer,int size,int count,FILE *fp);
功能为:从文件指针fp所指向的文件的当前位置开始,一次读入size个字节,重复count次,
并将读取到的数据存到buffer开始的内存区中,同时将读写位置指针后移size*count次。
该函数的返回值是实际读取的count值。
	buffer:是一个指针,在fread函数中在,它表示存放读入数据的首地址(即存放在何处)。
在fwrite函数中,它表示要输出的数据在内存中的首地址(即从何处开始存储)。
	size:表示数据块的字节数。
	count:表示要读写的数据块数
	fp:表示文件指针。
例如:float fa[5]; fread(fa,4,5,fp);
其意义是从fp所指的文件中,每次读4个字节(一个实数)送入实型数组fa中,连续读5次,
即读5个实数到fa中。
(2)数据块写函数fwrite(),该函数的原型如下。
int fwrite(void *buffer,int size,int count,FILE *fp);
功能为:从buffer所指的内存区开始,一次输出size个字节,重复count次,并将输出的数据
存入fp所指向的文件中,同时将读写位置指针后移size*count次。
*/
//例12.7.利用fread()和fwrite()函数实现12.6
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
	while(fread(&class[i],sizeof(struct stu),1,fp)==1){
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

姓名:jiaoqiqi

性别:f

第4个人的信息:

学号:4

姓名:liuxin

性别:f

第5个人的信息:

学号:5

姓名:lihao

性别:m
该班数据为:
学号  姓名  性别
1 shiyongchao m
2 wangli m
3 jiaoqiqi f
4 liuxin f
5 lihao m
*/
