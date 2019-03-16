/*���ļ�:fopen����ԭ�����¡�
FILE *fopen(char *filenmae,char *mode);
����Ϊ:ʹ��modeģʽ��ָ����filename�ļ�������ļ��ɹ�,�򷵻�һ��FILE���͵�ָ��;
���ļ�ʧ��,�򷵻�NULL��
����,��һ���Ϳ�ִ���ļ�����ͬ·���µ��ı��ļ�test.txt
FILE *fp;
fp=fopen("test.txt","r");
����,��һ��E����code�ļ����µ��ı��ļ�test.txt
����1:FILE *fp; fp=fopen("e:\\code\\test.txt","rt");
����2:FILE *fp; fp=fopen("e:/code/test.txt","rt");
(1)r(read):�� w(write):д a(append):׷�� t(text):�ı��ļ�,��ʡ�Բ�д b(binary):�������ļ� +:����д
(2)����"r"��һ���ļ�ʱ,���ļ������Ѿ�����,��ֻ�ܴӸ��ļ�������
(3)����"w"�򿪵��ļ�ֻ������ļ�д�롣���򿪵��ļ�������,����ָ�����ļ����������ļ�,
   ���򿪵��ļ��Ѿ�����,�򽫸��ļ�ɾȥ,�ؽ�һ�����ļ���
(4)��Ҫ��һ���Ѵ��ڵ��ļ���׷���µ���Ϣ,ֻ����"a"��ʽ���ļ�������ʱ���ļ�������,����½�һ���ļ���
�ر��ļ�:fclose����ԭ�����¡�
int fclose(FILE *fp);
����Ϊ:���ļ�ָ��fp��ָ���ļ��رա�������0,���ʾ�رճɹ��������ط�0ֵ���ʾ�д����������硣fclose(fp)
��ȡ�ļ�������:
fileno����ԭ�����¡�
int fileno(FILE *fp);
����Ϊ:���������ļ�ָ��fp��Ӧ���ļ�������(handle_no)�������ļ��ɹ���,����ϵͳ���Զ�����һ������,
�˺��������������򿪵��ļ�������ͷ�ļ�Ϊstdlib.h��
filelength����ԭ�����¡�
long filelength(int handle_no);
����Ϊ:�����ļ�������(handle_no)��Ӧ���ļ���С,���ֽ�Ϊ��λ������ͷ�ļ�Ϊio.h��
*/
//��12.1.���ý���ʽ�ļ���ʽ��ָ�����ļ�,���ļ��򿪳ɹ�,����ʾ���ļ��Ĵ�С(Byte);���ļ���ʧ��,����ʾ������Ϣ
#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#define LEN 100
int main()
{
	FILE *fp;
	char filename[LEN];
	int fno,fsize;
	printf("������Ҫ���ļ�������·�������ļ���: ");
	gets(filename);
	fp=fopen(filename,"r");
	if(fp==NULL){
		printf("\n���ļ�ʧ��,%s���ܲ�����\n",filename);
		exit(1);
	}
	fno=fileno(fp);
	fsize=filelength(fno);
	printf("\n %s�ļ��򿪳ɹ�,�ļ���С%dBytes\n",filename,fsize);
	fclose(fp);
	return 0;
} 

/*
������Ҫ���ļ�������·�������ļ���: stu_new.txt

stu_new.txt�ļ��򿪳ɹ�,�ļ���С195Bytes
*/
