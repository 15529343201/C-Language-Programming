//7.12 �ַ�����������
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[20][80],t[80];
	int i,j,cnt;
	printf("������Ҫ������ַ����ĸ���,���20��:\n");
	scanf("%d",&cnt);
	printf("������%d���ַ���(�����ո�),�س�����:\n",cnt);
	for(i=0;i<cnt;i++)
		scanf("%s",s[i]);
	for(i=0;i<cnt-1;i++)//����ѡ�����򷨶��ַ��������ֵ���������
		for(j=i+1;j<cnt;j++)
			if(strcmp(s[i],s[j])>0)
			{
				strcpy(t,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],t);
			}
	printf("�����Ľ��Ϊ:\n");
	for(i=0;i<cnt;i++)
		printf("%s\n",s[i]);
	return 0;
}

/*
������Ҫ������ַ����ĸ���,���20��:
6
������6���ַ���(�����ո�),�س�����:
shiyongchao
aierken
hanyile
wangyigui
wangli
liuchencheng
�����Ľ��Ϊ:
aierken
hanyile
liuchencheng
shiyongchao
wangli
wangyigui
*/

