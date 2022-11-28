#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
unsigned int bin_int(char *p);
int main()
{
	char s[33];
	unsigned int n=0;

	gets(s);
	n=bin_int(s);
	printf("%u\n",n);

}
unsigned int bin_int(char *s)
{
	unsigned int n=0,i=0,j=0;
	i=strlen(s)-1;
	while(s[j])
	{
		if(s[j]==49)
			n=n+pow(2,i);
		else if(s[j]==48)
			;	
		else
		{
			printf("invalid input\n");
			exit(0);	
		}
		i--;
		j++;
	}
	return n;
}

