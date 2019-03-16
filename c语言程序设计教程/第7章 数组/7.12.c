//7.12 字符串升序排列
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[20][80],t[80];
	int i,j,cnt;
	printf("请输入要输入的字符串的个数,最多20个:\n");
	scanf("%d",&cnt);
	printf("请输入%d个字符串(不带空格),回车结束:\n",cnt);
	for(i=0;i<cnt;i++)
		scanf("%s",s[i]);
	for(i=0;i<cnt-1;i++)//利用选择排序法对字符串进行字典升序排列
		for(j=i+1;j<cnt;j++)
			if(strcmp(s[i],s[j])>0)
			{
				strcpy(t,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],t);
			}
	printf("排序后的结果为:\n");
	for(i=0;i<cnt;i++)
		printf("%s\n",s[i]);
	return 0;
}

/*
请输入要输入的字符串的个数,最多20个:
6
请输入6个字符串(不带空格),回车结束:
shiyongchao
aierken
hanyile
wangyigui
wangli
liuchencheng
排序后的结果为:
aierken
hanyile
liuchencheng
shiyongchao
wangli
wangyigui
*/

