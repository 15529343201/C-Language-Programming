/*例8.33.十进制与其他进制(二至九进制)数间的相互转换,程序能够自动帮助用户纠正输入错误。*/
#include<stdio.h>
#include<stdlib.h>
long change(int a[],int len,int b){
	int i,k=1;
	long num=0;
	for(i=1;i<=len;i++){
		num=num+a[i]*k;
		k=k*b;
	}
	return num;
}
void ten_to_oth(){
	int sum,n,j,i=0,arr[80];
	printf("Please input a Dec_num:");//输入十进制数
	scanf("%d",&sum);
	printf("Please input the base:");//输入要转换的进制
	scanf("%d",&n);
	do{
		i++;
		arr[i]=sum%n;
		sum=sum/n;
		if(i>=80)
			printf("overflow\n");
	}while(sum!=0);
	printf("The result is:\t");
	for(j=i;j>0;j--)
		printf("%d",arr[j]);
	printf("\n");
}
oth_to_ten(){
	int base,i,num,arr[80];
	long sum=0;
	char ch;
	printf("Please input the base you want to change:");
	scanf("%d",&base);
	printf("Please input number:");
	scanf("%d",&num);
	for(i=1;num!=0;i++){
		arr[i]=num%10;
		num=num/10;
	}
	sum=change(arr,i-1,base);
	printf("The result is:%ld\n",sum);
}
int main(void){
	int flag=1;
	while(flag!=0){
		printf("\n1:ten_to_oth\n");
		printf("2:oth_to_ten\n");
		printf("0:exit\n");
		printf("\nEnter a number:");
		scanf("%d",&flag);
		switch(flag){
			case 1:ten_to_oth();break;
			case 2:oth_to_ten();break;
			case 0:exit(0);
		}
	}
	return 0;
}

/*
1:ten_to_oth
2:oth_to_ten
0:exit

Enter a number:1
Please input a Dec_num:255
Please input the base:2
The result is:  11111111

1:ten_to_oth
2:oth_to_ten
0:exit

Enter a number:2
Please input the base you want to change:8
Please input number:1000
The result is:512

1:ten_to_oth
2:oth_to_ten
0:exit

Enter a number:0
*/
