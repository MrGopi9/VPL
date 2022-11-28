#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *getstr()
{
	char i=0,*p=NULL;

	do
	{
		p=realloc(p,i+1);
		p[i]=getchar();
	}while(p[i++]!=10);
	p[i-1]='\0';

	return p;
}


int main()
{
	char *s=NULL,*p=NULL,*q=NULL,*t;
	int i,j,b,c,a=0;

	s=getstr();
	__fpurge(stdin);
	p=getstr();
	b=strlen(p);
	__fpurge(stdin);
	q=getstr();
	c=strlen(q);
	t=s;
	i=strlen(q)-strlen(p);
	while(t=strstr(t,p))
	{
		a++;
		j=t-s;
		if(i==0)
			strncpy(t,q,strlen(q));
		else if(i>0)
		{
			s=realloc(s,strlen(s)+i+1);
			memmove(t+c,t+b,strlen(t+b)+1);
			strncpy(t,q,strlen(q));
		}
		else
		{
			strncpy(t,q,strlen(q));
			memmove(t+c,t+b,strlen(t+b)+1);
			s=realloc(s,strlen(s)+i+1);

		}
		t=s+j;

	}
	if(a==0)
		printf("%s not found",p);
	else
		puts(s);
}


