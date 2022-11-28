#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
int count=0;
struct student
{
	char *name;
	int roll;
	float marks;
};
void print(struct student*);
char* getstring();
struct student* input(struct student*);
void find_record(struct student *);
int main()
{
	int ch;
	struct student *ptr=NULL;
	while(1)
	{
		__fpurge(stdin);
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:ptr=input(ptr);break;
			case 2:print(ptr);break;
			//case 3:ptr=sort(ptr);
			//case 4:ptr=delete(ptr);
			case 5:find_record(ptr);
			       return 0;
			default:printf("invalid choice\n");
				return 0;
		}
	}
}
char *getstring()
{
	char*ptr=NULL;int i=0;
	do{
		ptr=realloc(ptr,i+1);
		ptr[i]=getchar();
	}while(ptr[i++]!='\n');
	ptr[i-1]='\0';
	return ptr;
}
struct student *input(struct student *p)
{
	p=realloc(p,(count+1)*sizeof(struct student));
//	printf("enter name of student: \n");
	__fpurge(stdin);
	(p+count)->name=getstring();
//	printf("enter roll num of the student: \n");
	 __fpurge(stdin);
	scanf("%d",&(p+count)->roll);
//	printf("enter marks of the student: \n");
	__fpurge(stdin);
	scanf("%f",&(p+count)->marks);
	count++;
	return p;
}
void print(struct student* p)
{
	if(count==0)
	{
		printf("nothing to print\n");
		return ;
	}
	int i=0;
	for(i=0;i<count;i++)
	{
		printf("ptr[%d]--> %s  %d  %f\n",i,(p+i)->name,(p+i)->roll,(p+i)->marks);
	}

}

void find_record(struct student *p)
{
	char i,*s=NULL;
	if(count==0)
	{
		printf("no records found to search\n");
		return;
	}
	__fpurge(stdin);
	s=getstring();
	for(i=0;i<count;i++)
		if(strcmp(s,p[i].name)==0)
		{
			printf("ptr[%d]-->%s %d %f\n",i,(p+i)->name,(p+i)->roll,(p+i)->marks);
			return;
		}
	if(i==count)
		printf("record not found\n");
}
