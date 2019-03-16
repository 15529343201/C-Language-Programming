/*求s=1+(1+2)+...+(1+2+3+...+n)的值,其中n由键盘输入*/
#include<stdio.h>
int main()
{
	int s,i,n,j,t;
	printf("please input n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		t=0;
		for(j=1;j<=i;j++)
			t=t+j;
		s=s+t;
	}
	printf("s=%d",s);
} 
/*
please input n:
4
s=20
*/
