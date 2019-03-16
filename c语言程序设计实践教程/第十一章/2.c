/*从键盘输入一行字符串,将其中的小写字母转换成大写字母,
然后输出到一个磁盘文件"change.txt"中保存*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int i;
	char str[100];
	if((fp=fopen("change.txt","w"))==NULL){
		printf("cannot open the file.\n");
		exit(0);
	}
	printf("input a string:\n");
	gets(str);
	for(i=0;str[i]&&i<100;i++){
		if(str[i]>='a'&&str[i]<='z'){
			str[i]-='a'-'A';
		}
		fputc(str[i],fp);
	}
	fclose(fp);
	fp=fopen("change.txt","r");
	fgets(str,100,fp);
	printf("%s\n",str);
	fclose(fp);
	return 0;
} 

/*
input a string:
shiyongchaoHelloworld!
SHIYONGCHAOHELLOWORLD!
*/
