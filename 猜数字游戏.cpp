#include <stdio.h>
int main(){
	int a,b,c,i,x;
   
	printf("�����ҽ��������������⣬�ش���������1���ش��������0\n");
	for(i=1;i<=3;i++)
	switch(i)
	{
		case 1:printf("������ѡȡ�������Ƿ���4��5��6��7֮�У�\n");
		       scanf("%d",&a);
		       break;
		case 2:printf("������ѡȡ�������Ƿ���2��3��6��7֮�У�\n");
		       scanf("%d",&b);
	           break;
		case 3:printf("������ѡȡ�������Ƿ���1��3��5��7֮�У�\n");
		       scanf("%d",&c);
		       break;
		
		}
		printf("��ѡȡ�������ǣ�%d",x=a*4+b*2+c*1);
	 
 } 
 
 
 
 
 
 
