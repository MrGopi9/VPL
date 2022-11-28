#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *strCon(char *p)
{
	static int j;
	static char temp[20];
	if(j>0)
		return temp;
	for( ;j<strlen(p);j++)
	{
	    if(p[j]>=65 && p[j]<=90)
		    temp[j]=p[j]+32;
		else if(p[j]>=97 && p[j]<=122)
		    temp[j]=p[j]-32;
		else
		    temp[j]=p[j];
	}

	return temp;
}


int main()
{
	char s[50],p[20],*t;
	int i,j,b,c,a=0;
	gets(s);
	gets(p);
	t=s;
	while(t=strstr(t,p))
	{
		a++;
	//	printf("%d",a);
		strncpy(t,strCon(p),strlen(p));
		t=t+strlen(p);
	}
	if(a==0)
		printf("sub string not found");
	else
		puts(s);
}



