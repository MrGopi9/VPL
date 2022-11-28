#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int verify(char *p)
{
	int i=0;
	for(i=0;p[i];i++)
		if(p[i]==32 || (p[i]>64 && p[i]<91) || (p[i]>96 && p[i]<123))
			continue;
		else 
		{
			printf("ERROR");
			exit(0);	
		}

	return 1;



}



void convert(char *p)
{
	int i=0,r=0;
	if(verify(p))
	{
		i=0;
		while(p[i]==32)
			i++;
		if(p[i]>96)
		{
			p[i]=p[i]-32;
			i++;
		}

		for(i;p[i];i++)
			if((p[i]>96) &&( (p[i+1]==32 || p[i+1]=='\0') || p[i-1]==32 ))
				p[i]=p[i]-32;

	}


}

int main()
{
	char s[50];
	gets(s);
	convert(s);
	printf(" %s",s);
}
