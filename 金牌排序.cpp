#include <stdio.h>

struct country
{
	char name[100];
	int goldnum;
	int silvernum;
	int bronzenum;
	int totalnum;
 }; 
 
 typedef struct country  country;
 
 void printcountry(country c)
 {
 	printf("%s\t%d\t%d\t%d\t%d\n",c.name,c.goldnum,c.silvernum,c.bronzenum,c.totalnum);
 }
 
 int main()
 {
 	country c[8];
 	FILE* fp=fopen("C:\file.txt","r");
 	if(fp==NULL)
 	{
 		printf("Error\n");
 		return 0;
	 }
	 
	char str[8][100]={'\0'};
	 
	for(int i=0;i<8;i++)
	{
	    fscanf(fp,"%s %d %d %d %d",
		c[i].name,&c[i].goldnum,&c[i].silvernum,&c[i].bronzenum,&c[i].totalnum);
    }
 
fclose(fp);
 
for(int i=0;i<8;i++)
{
 	printf("%s\t%d\t%d\t%d\t%d\n",c[i].name,c[i].goldnum,c[i].silvernum,c[i].bronzenum,c[i].totalnum);
}

country max=c[0];
for(int i=1;i<8;i++)
{
	if(max.totalnum<c[i].totalnum)
	{
		max=c[i];
	}
}
printf("\n奖牌最多的国家信息:\n");
printcountry(max);

return 0;
}

 
 
