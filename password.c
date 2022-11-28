#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s1[20];
	int u,l,s,n,i;
	u=l=s=n=0;
	gets(s1);
	l=strlen(s1);
	if(l<8 )
		printf("password too short\n");
	else if(strchr(s1,32)!=NULL)
		printf("space not allowed\n");
	else
	{
		l=0;
		for(i=0;s1[i];i++)
		{
			if(s1[i]>64 && s1[i]<91)
				u++;
			else if(s1[i]>96 && s1[i]<123)
				l++;
			else if(s1[i]>47 && s1[i]<58)
				n++;
			else
				s++;
		}
		if(u&l&n&s)
			printf("correct password\n");
		else
		{
			printf("missing ");
			if(u==0)
				printf("upper ");
			if(l==0)
				printf("lower ");
			if(n==0)
				printf("number ");
			if(s==0)
				printf("special");
		}
	}

	
}
