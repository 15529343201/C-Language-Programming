/*Àı8.34.¾ø¶ÔËØÊı*/
#include<stdio.h>
#include<math.h>
int prime(int n){
	int i;
	if(n<=1)
		return 0;
	else if(n==2)
		return 1;
	else{
		for(i=2;i<sqrt(n);i++){
			if(n%i==0)
				return 0;
		}	
		return 1;	
	}
}
int ab_prime(int m){
	int a;
	a=(m%10)*10+m/10;
	if(prime(m)&&prime(a))
		return 1;
	else
		return 0;
}
int main(void){
	int i;
	for(i=10;i<=99;i++){
		if(ab_prime(i))
			printf("%d ",i);
	}
	return 0;
} 

/*
11 13 17 31 37 71 73 79 97
*/
