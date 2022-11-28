#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int myatoi(const char *p)
{
	int i=0,r=0,sign=0;
	if(p[0]=='-')
	{
		sign=1;
		i=1;
	}

	for(i;p[i];i++)
	{
		if(p[i]<48 || p[i]>57)
		{
			printf("input wrong\n");
			exit(0);
		}
		else
			r=r*10+(p[i]-48);
	}
	if(sign==1)
		r*=-1;

	return r;
}

int main()
{
	char s[10];
	fgets(s,10,stdin);
	s[strlen(s)-1]='\0';

	int x;
	printf(" lib .., %d\n",atoi(s));

	x=myatoi(s);
	printf(" my imp .., %d \n",myatoi(s));
}
