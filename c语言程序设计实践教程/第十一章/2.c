/*�Ӽ�������һ���ַ���,�����е�Сд��ĸת���ɴ�д��ĸ,
Ȼ�������һ�������ļ�"change.txt"�б���*/
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
