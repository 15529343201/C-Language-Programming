/*例8.32.利用插入排序法将10个字符从小到大进行排序*/
#include<stdio.h>
void insert(char s[]){
	int i,j,t;
	for(i=1;i<=9;i++){
		t=s[i];//t=s[1] t=s[2]
		j=i-1;//j=0 j=1
		while((j>=0)&&(t<s[j])){
			s[j+1]=s[j];//s[1]=s[0] s[2]=s[1]
			j--;//j=-1 j=0
		}
		s[j+1]=t;//s[0]=s[1] s[1]=s[2]
	}
}
int main(void){
	char a[11];
	int i;
	printf("Input 10 character:");
	for(i=0;i<10;i++)
		a[i]=getchar();
	a[i]='\0';
	insert(a);
	printf("Sorted character is:%s\n",a);
	return 0;
} 

/*
Input 10 character:lkjhqfdsaz
Sorted character is:adfhjklqsz
*/
 
