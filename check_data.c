#include<stdio.h>
#include<string.h>
int checkI(char *p)
{
	while(*p)
	{
		if(*p<48 || *p>57)
			return 0;
		p++;
	}

	return 1;
}
int checkF(char *p)
{
	int cnt=0;
	while(*p)
	{
		if(*p<48 || *p>57)
			if(*p=='.')
				cnt++;
			else
				return 0;
		p++;
	}	
	if(cnt>1)
		return 0;
	return 1;
}




int main()
{
	char s[20];
	fgets(s,20,stdin);
	s[strlen(s)-1]=0;

	if(checkI(s))
		printf("Integer number\n");
	else if(checkF(s))
		printf("Float number\n");
	else
	printf("Invalid number\n");

}
