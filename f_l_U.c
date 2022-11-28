#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[100];
	int i=0,j;
	fgets(s,80,stdin);
	s[strlen(s)-1]=0;

	for(i=0;s[i];i++)
	{
		if(!(s[i]==32 || isalpha(s[i])))
		{
			printf("invalid input\n");
			return 0;
		}

		if(islower(s[i]) && i==0)
			s[i]-=32;
		else if(s[i]==32 && islower(s[i+1]))
			s[i+1]-=32;
		else if(islower(s[i]) && (s[i+1]==32 || s[i+1]=='\0'))
			s[i]-=32;
	}
	puts(s);

}
