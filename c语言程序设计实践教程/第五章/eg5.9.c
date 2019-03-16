/*利用公式pi/2=1+1/3+1/3*2/5+1/3*2/5*3/7+1/3*2/5*3/7*4/9+...*/
#include<stdio.h>
int main()
{
	int m=1;
	double t=1.0,s=0.0,pi;
	while(t>=1e-5){
		s=s+t;
		t=t*m/(2*m+1);
		m++;
	}
	pi=2*s;
	printf("%f",pi);
	return 0;
} 
