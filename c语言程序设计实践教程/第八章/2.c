/*��дһ������,�����û��������͵绰����,�������Ĵʵ�˳�������,
����û��������͵绰���롣*/
#include<stdio.h>
#define M 5
struct person{
	char name[5];
	char num[12];
};

input(struct person s[]){
	int i;
	printf("���������͵绰����:\n");
	for(i=0;i<M;i++){
		printf("��%d����:",i+1);
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
	printf("     ����   �绰����:\n");
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
���������͵绰����:
��1����:shi
13669279739
��2����:wang
12345677999
��3����:liu
11111111111
��4����:ai
22222222222
��5����:han
33333333333
     ����   �绰����:
ai         22222222222
han        33333333333
liu        11111111111
shi        13669279739
wang       12345677999
*/
