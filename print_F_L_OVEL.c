#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[20],*p,*q,arr[]="AEIOUaeiou";
	gets(s);
	int i=0,j,l,c=0;

	while(s[i]==32)
		i++;
	
	
	
	for(i;s[i];i++)
	{
		for(j=i;s[j];j++)
			if(s[j]!=32)
				continue;
			else
				break;
		if(strchr(arr,s[i]) && strchr(arr,s[j-1]))
		{
			c=1;
			while(i<j)
				printf("%c",s[i++]);
			printf(" ");
		}
		
		

		if(s[j]=='\0')
			break;
		i=j;

	}
	if(c==0)
	{
		printf("no words to print\n");
	}
}

