#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ja[n],ba[n];
	char id[n][17];
	for (int i=0;i<n;i++)
	{
		scanf("%s %d %d",id[i],&ja[i],&ba[i]);
		
	}
	
	int m;
	scanf("%d",&m);
	int s[m];
	for(int i=0;i<m;i++)  scanf("%d",&s[i]);
	
	for(int i=0;i<m;i++)
	{
		int index;
		for(int j=0;j<n;j++)
		{
			if(s[i]==ja[j])
			{
				index=j;
				break;
			}
		}
		printf("%s %d\n",id[index],ba[index]);
	}
	return 0; 
 } 
