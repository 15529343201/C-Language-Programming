/*��7.3.��дһ�γ���,Ҫ����һ������5��Ԫ�ص�����,�ó����ֵ����Сֵ,�����.*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
	int arr[5];
	int i,max,min;
	printf("������5������:");
	fflush(stdout);
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("����Ԫ��Ϊ:\n");
	for(i=0;i<5;i++)
		printf("%d ",arr[i]);
	max=min=arr[0];
	for(i=0;i<=4;i++){
		if(max<arr[i]) max=arr[i];
		else if(min>arr[i]) min=arr[i];
	}
	printf("\n");
	printf("���ֵΪ:%d\n��СֵΪ:%d\n",max,min);
	return 0;
} 

/*
������5������:4 5 3 2 -5
����Ԫ��Ϊ:
4 5 3 2 -5
���ֵΪ:5
��СֵΪ:-5
*/
