#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[50];
	int s=0,i=0;
	gets(str);
	while(str[i]==32)
	{
		s++;
		memmove(str+i,str+i+1,strlen(str+i+1)+1);
	}
	if(str[0]=='\0')
	{
		printf("empty string\n");
		exit(0);
	}
	else
		for(i;str[i];i++)
			if(str[i]==32 && (str[i+1]==32 || str[i+1]=='\0'))
			{
				s++;
				memmove(str+i,str+i+1,strlen(str+i+1)+1);
				i--;
			}
	if(s==0)
		puts("no extra spaces");
	else
		puts(str);
}





