#include<stdio.h>
int main()
{
	char str[50];
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
		for(;str[i];i++)
			if(str[i]>64 && str[i]<91)
				str[i]=str[i]+32;
			else if(str[i]>96 && str[i]<123)
				str[i]=str[i]-32;
			else
				continue;
	puts(str);
	puts("vector");

}


