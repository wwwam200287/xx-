#include <stdio.h>
#include <string.h> 
int main()
{
	char str[]="2*2/4*1/1*2*3/2";
	int res=str[0]-'0';
	for(int i=1;i<=strlen(str);i++)
	{
		if(str[i]=='*')
		{
			int rightOperand=str[i+1]-'0';
			res=res*rightOperand;
		
		}
		else if(str[i]=='/')
		{
			int rightOperand=str[i+1]-'0';
			res=res/rightOperand;
			
		}
		i++;
		
	}
	
	printf("%d\n",res);
	
	return 0;
 } 
