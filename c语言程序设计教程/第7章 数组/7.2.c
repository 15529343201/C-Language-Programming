/*从键盘输入10个学生的成绩存储在数组中,求成绩最高者的序号和成绩*/
#include <stdio.h>

int main(void)
{
	int a[10],i,max,num;
	printf("请输入10个学生的成绩,空格分隔,回车结束:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	max=a[0];//初始化max为第一个值
	for (i=1;i<10;i++)
		if (a[i]>max)
		{
			max=a[i];
			num=i+1;
		}
	printf ("成绩最高者的序号为%d,成绩为%d\n",num,max);
	return 0;
}

/*
请输入10个学生的成绩,空格分隔,回车结束:
78 88 68 97 12 33 99 23 23 76
成绩最高者的序号为7,成绩为99
*/

