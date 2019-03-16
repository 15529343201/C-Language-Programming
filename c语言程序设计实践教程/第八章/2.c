/*编写一个程序,输入用户的姓名和电话号码,按姓名的词典顺序排序后,
输出用户的姓名和电话号码。*/
#include<stdio.h>
#define M 5
struct person{
	char name[5];
	char num[12];
};

input(struct person s[]){
	int i;
	printf("输入姓名和电话号码:\n");
	for(i=0;i<M;i++){
		printf("第%d个人:",i+1);
		scanf("%s%s",s[i].name,s[i].num);
	}
}

sort(struct person s[]){
	int i,j,k;
	struct person temp;
	for(i=0;i<M-1;i++){
		k=i;
		for(j=i+1;j<M;j++){
			if(strcmp(s[k].name,s[j].name)>0){
				k=j;
			}
		}
		temp=s[k];
		s[k]=s[i];
		s[i]=temp;
	}
}

output(struct person s[]){
	int i;
	printf("     姓名   电话号码:\n");
	for(i=0;i<M;i++)
		printf("%-10s %-10s\n",s[i].name,s[i].num);
}

int main()
{
	struct person a[M];
	input(a);
	sort(a);
	output(a);
	return 0;	
} 

/*
输入姓名和电话号码:
第1个人:shi
13669279739
第2个人:wang
12345677999
第3个人:liu
11111111111
第4个人:ai
22222222222
第5个人:han
33333333333
     姓名   电话号码:
ai         22222222222
han        33333333333
liu        11111111111
shi        13669279739
wang       12345677999
*/
