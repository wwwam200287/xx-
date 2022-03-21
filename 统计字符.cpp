#include <stdio.h>
#include <string.h>
int main()
{
	char a[1000];
	printf("请输入想要查询的英文句子：\n");
	gets(a);
	int number=0;
	char *pa,*pb;
	for(int i=0;i<=strlen(a);i++)
	{
		pa=&a[i];
		pb=&a[i+1];
		if((*pa=='i'||*pa=='I')&&(*pb=='t'||*pb=='T'))
		{
			number++;
		}
	}
	printf("个数应为：%d\n",number);
 } 
