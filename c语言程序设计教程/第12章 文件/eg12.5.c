/*例12.5.有两个磁盘文件string1和string2,各存放一行字母,
要求把这两个文件中的信息合并后并按字母顺序输出到一个新的磁盘文件string中
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	int i,j,count,count1;
	char string[160]="",t,ch;
	fp=fopen("string1.txt","rt");
	if(fp==NULL){
		printf("不能打开文件string1!\n");
		exit(1);
	}
	printf("\n读取到文件string1的内容为:\n");
	for(i=0;(ch=fgetc(fp))!=EOF;i++){
		string[i]=ch;
		putchar(string[i]);
	}
	fclose(fp);
	count1=i;
	fp=fopen("string2.txt","rt");
	if(fp==NULL){
		printf("不能打开文件string2!\n");
		exit(1);
	}
	printf("\n读取文件string2的内容为:\n");
	for(i=count1;(ch=fgetc(fp))!=EOF;i++){
		string[i]=ch;
		putchar(string[i]);
	}
	fclose(fp);
	count=i;
	for(i=0;i<count;i++){
		for(j=i+1;j<count;j++){
			if(string[i]>string[j]){
				t=string[i];
				string[i]=string[j];
				string[j]=t;
			}
		}
	}
	printf("\n排序后数组string的内容为:\n");
	printf("%s\n",string);
	fp=fopen("string.txt","wt");
	fputs(string,fp);
	printf("并已将该内容写入文件string.txt中!");
	fclose(fp);
	return 0;
} 

/*

读取到文件string1的内容为:
shiyongchaohelloworld!
读取文件string2的内容为:
liuchenchenghelloworld!
排序后数组string的内容为:
!!acccddeeeegghhhhhhiilllllllnnnoooooorrsuwwy
并已将该内容写入文件string.txt中!
*/
