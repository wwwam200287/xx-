#include <stdio.h>
#include <string.h>

struct Student
{
	int stuId;
	int stuAge;
	char stuName[100];
	
	struct Student *next;
};

void  printStudent(struct Student* curp )
{
	printf("学号：%d   年龄：%d  姓名：%s\n",curp->stuId,curp->stuAge,curp->stuName);
}

void printLIKELISET(struct Student* heap)
{
	while(heap!=NULL)
	{
		printStudent(heap);
		heap=heap->next;
		
	}
}
int main()
{
	struct Student s1;
	s1.stuId=219950226;
	s1.stuAge=18;
	strcpy(s1.stuName,"吴哈哈");
	
	struct Student s2;
	s2.stuId=219950227;
	s2.stuAge=18;
	strcpy(s2.stuName,"吴嘻嘻");
	
	struct Student s3;
	s3.stuId=219950228;
	s3.stuAge=18;
	strcpy(s3.stuName,"吴嚯嚯");
	
	struct Student s4;
	s4.stuId=219950229;
	s4.stuAge=18;
	strcpy(s4.stuName,"吴嘿嘿");
	
	printf("s1->s2->s3->s4->NULL\n");
	s1.next=&s2;
	s2.next=&s3;
	s3.next=&s4;
	s4.next=NULL;
	
	struct Student *curp=&s1;
	while(curp!=NULL)
	{
		printStudent(curp);
		curp=curp->next;
	}
	
	printf("请输入你想要查询的学生的学号:\n");
	int id;
	scanf("%d",&id);
	curp=&s1;
    while(curp!=NULL)
    {
    	if(curp->stuId==id)
		{
			printStudent(curp);
			break;
		}
		else 
		{
			curp=curp->next;
		 } 
	}
	printf("接下来，我们删除s2\n");
	s1.next=&s3;
	s2.next=NULL;
	 
	curp=&s1;
	printLIKELISET(curp);
	
	return 0;
}
 
