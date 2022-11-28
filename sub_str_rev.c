#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *strRev(char *p)
{
	static int i,j;
	static char temp[20];
	if(i>0)
		return temp;
	for(j=strlen(p)-1;j>=0;i++,j--)
		temp[i]=p[j];

	return temp;
}


int main()
{
	char s[20],p[20],*t;
	int i,j,b,c,a=0;
	gets(s);
	gets(p);
	t=s;
	while(t=strstr(t,p))
	{
		a++;
		strncpy(t,strRev(p),strlen(p));
	}
	if(a==0)
		printf("sub string not found");
	else
		puts(s);
}


