//��8.29.��ָ������ָ�������Ϊ�����Ĳ���,ʵ����8.28 
#include<stdio.h>
int evensum(int n){ //ż���� 
	int i,sum=0;
	for(i=2;i<=n;i+=2)
		sum+=i;
	return sum;
}
int oddsum(int n){ //������ 
	int i,sum=0;
	for(i=1;i<=n;i+=2)
		sum+=i;
	return sum;
}
int result(int n,int (*p)(int)){
	int sum;
	sum=(*p)(n);
	return sum;
}
int main(void){
	int n,sum,flag;
	printf("input n:");
	scanf("%d",&n);
	printf("input flag(0 or 1):");
	scanf("%d",&flag);
	if(flag==1) sum=result(n,oddsum);
	else sum=result(n,evensum);
	printf("sum=%d\n",sum);
	return 0;
} 

