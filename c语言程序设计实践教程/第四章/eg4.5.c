/*��4.5.����һ��������x,��x����0<x<32767,�����x�Ǽ�λ��
�����x��λ�ϵ����֡�*/
#include<stdio.h>
int main()
{
	int n,x,t;
	printf("enter a number:\n");
	scanf("%d",&x);
	if(x>0&&x<32767){
		if(x/10==0) n=1;
		else if(x/100==0) n=2;
		else if(x/1000==0) n=3;
		else if(x/10000==0) n=4;
		else n=5;
		t=x%10;
		printf("x=%dλ��:%d��λ����:%d\n",x,n,t);
	}
	else printf("Enter Error!");	
} 
/*
enter a number:
12345
x=12345λ��:5��λ����:5
*/
