/*��дһ��������e��ֵ����ͨ��С��10^7ʱֹͣ����
e=1+1/1!+1/2!+...+1/n!*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i=1;
	float e=1.0,t=1.0;
	while(fabs(t)>=1e-7){
		t=t/i;
		e=e+t;
		i++;
	}
	printf("e=%f\n",e);
	return 0;
} 
/*
e=2.718282
*/
