#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[30],t[20]="aeiouAEIOU";
	int i,f=0;
	gets(s);
	for(i=0;s[i];i++)
	{
		if(!((s[i]>64 && s[i]<91) || (s[i]>96 && s[i]<123)) )
		{
			if(s[i]!=32)
			{
				printf("invalid input\n");
				return 0;
			}
		}
		else if(strchr(t,s[i])!=NULL && strchr(t,s[i+1])!=NULL)
		{
			f=1;
			memset(s+i,'*',2);
			i++;
		}


	}
	if(f==0)
		puts("there is no pair of vovels to hide\n");
	else 
		puts(s);
}
