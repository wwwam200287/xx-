#include <stdio.h>
int main()
{
	char str[]="3+4";
	
	int liftOperand=str[0]-'0';
	int rightOperand=str[2]-'0';
	int sum=liftOperand+rightOperand;
	
	printf("%d\n",sum);
	
	return 0;
 } 
 
 
