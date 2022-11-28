#include<stdio.h>
int main()
{
	char str[20];
	int i=0;

	gets(str);
	while(str[i]==32)
		i++;

	if(str[i]=='\0')
	{
		printf("ERROR");
		exit(0);
	}
	else
		for(i=0;str[i];i++)
			if(str[i]>64 && str[i]<90)
				str[i]=str[i]+32;
			else if(str[i]>96 && str[i]<122)
				str[i]=str[i]-32;
			else
				continue;

	puts(str);
}

	
