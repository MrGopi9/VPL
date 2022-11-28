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

void rev(char *p,char *q)
{
	char ch;
	while(p<q)
	{
		ch=*p;
		*p=*q;
		*q=ch;
		p++,q--;
	}
}
int main()
{
	char *s=NULL,*p=NULL,*q=NULL,*t;
	int i=0,j,b,c,a=0;

	s=getstr();
	while(s[i]==32)
		i++;

	while(s[i])
	{
		for(j=i;s[j];j++)
		{

			if(s[j+1]!=32 && s[j+1]!=0)
				continue;
			else
			{
				rev(s+i,s+j);
				break;
			}
		}
		if(s[j+1]==0)
			break;
		while(s[++j]==32);
		i=j;
	}
	puts(s);
}


