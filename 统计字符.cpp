#include <stdio.h>
#include <string.h>
int main()
{
	char a[1000];
	printf("��������Ҫ��ѯ��Ӣ�ľ��ӣ�\n");
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
	printf("����ӦΪ��%d\n",number);
 } 
