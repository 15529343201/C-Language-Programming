/*例9.4.编写程序完成对学生成绩的管理,要求实现的功能包括:
(1)学生信息录入:从键盘按学号顺序输入n名学生信息(学号、姓名、3门课程成绩)
(2)计算平均值:计算每个学生3门课程成绩的平均值
(3)学生信息排序:按照平均值从低到高的顺序对录入的学生信息进行排序
(4)学生信息输出:将排好序的学生信息输出
*/
#include<stdio.h>
#include<stdlib.h>
#define N 20
struct student{
	int id;
	char name[20];
	int score[3];
	float aver;
}; 

void Input(struct student st[],int n){
	int i,j;
	printf("please input Information:\n");
	for(i=0;i<n;i++){
		scanf("%d",&st[i].id);
		scanf("%s",st[i].name);
		for(j=0;j<3;j++)
			scanf("%d",&st[i].score[j]);
	}
}

void CalAver(struct student st[],int n){
	int i,j;
	for(i=0;i<n;i++){
		int s=0;
		for(j=0;j<3;j++)
			s+=st[i].score[j];
		st[i].aver=s/3.0;
	}
}

void Sort(struct student st[],int n){
	int i,j,k;
	struct student t;
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i+1;j<n;j++){
			if(st[k].aver>st[j].aver)
				k=j;
		}
		if(k!=i){
			t=st[k];
			st[k]=st[i];
			st[i]=t;
		}
	} 
}

void Output(struct student st[],int n){
	int i,j;
	printf("id    name	  s1    s2	  s3	aver\n");
	for(i=0;i<n;i++){
		printf("%d\t%s\t",st[i].id,st[i].name);
		for(j=0;j<3;j++){
			printf("%d\t",st[i].score[j]);
		}
		printf("%5.2f",st[i].aver);
		printf("\n");
	}
}

int main(void){
	int n;
	struct student st[N];
	printf("please input numbers:");
	scanf("%d",&n);
	Input(st,n);
	CalAver(st,n);
	Sort(st,n);
	Output(st,n);
	return 0;
}

/*
please input numbers:3
please input Information:
101 zhang 87 88 90
102 lisi 98 97 93
103 wang 78 76 69
id    name        s1    s2        s3    aver
103     wang    78      76      69      74.33
101     zhang   87      88      90      88.33
102     lisi    98      97      93      96.00
*/
