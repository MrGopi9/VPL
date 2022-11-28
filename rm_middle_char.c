#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[20],*p,*q;
	gets(s);
	int i=0,j,l,c=0;

	while(s[i++]==32);
	i--;
	if(s[i]=='\0')
	{
		printf("there is no words in input\n");
		return 0;
	}
	else
	{
		for(i;s[i];i++)
		{
			for(j=i;s[j];j++)
				if(s[j]!=32)
					continue;
				else
					break;
			l=j-i;
			if(l==1)
				i=j;
			else if(l%2==0)
			{
				memmove(s+i+(l/2-1),s+i+(l/2+1),strlen(s+i+(l/2+1))+1);
				i=j-2;
				c=1;
			}
			else
			{
				memmove(s+i+(l/2),s+i+(l/2+1),strlen(s+i+(l/2+1))+1);
				i=j-1;
				c=1;
			}

			if(s[j]=='\0')
				break;

		}
		if(c==0)
			printf("every word having single char only\n");
		else
			puts(s);
	}
}



