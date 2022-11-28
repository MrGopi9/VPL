#include<stdio.h>
#include<stdlib.h>
#include<string.h>
double myatoi(const char *p)
{
	int i=0,sign=0,power=1;
	double r=0;
	if(p[i]=='-')
		i++;

	for(i;p[i]!='.';i++)
	{
		if(p[i]<48 || p[i]>57)
		{
			printf("ERROR");
			exit(0);
		}
		else
			r=r*10+(p[i]-48);
	}
	for(i++;p[i];i++)
	{
		if(p[i]<48 || p[i]>57)
		{
err:
			printf("ERROR");
			exit(0);
		}
		r=r*10+(p[i]-48);
		power*=10;
	}
	if(power==1)
		goto err;
	else
		return r/power;
}

int main()
{
	char s[10];
	double d;
	gets(s);
	d=myatoi(s);
	if(s[0]=='-')
		d=-d;

	printf(" %lf",d);
}
