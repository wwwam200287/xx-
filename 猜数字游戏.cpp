#include <stdio.h>
int main(){
	int a,b,c,i,x;
   
	printf("现在我将会问你三个问题，回答是请输入1，回答否请输入0\n");
	for(i=1;i<=3;i++)
	switch(i)
	{
		case 1:printf("请问你选取的数字是否在4，5，6，7之中？\n");
		       scanf("%d",&a);
		       break;
		case 2:printf("请问你选取的数字是否在2，3，6，7之中？\n");
		       scanf("%d",&b);
	           break;
		case 3:printf("请问你选取的数字是否在1，3，5，7之中？\n");
		       scanf("%d",&c);
		       break;
		
		}
		printf("你选取的数字是：%d",x=a*4+b*2+c*1);
	 
 } 
 
 
 
 
 
 
