#include<stdio.h>
#include<string.h>
int main()
{
	char s[30],ch;
	fgets(s,30,stdin);
	ch=getchar();
	s[strlen(s)-1]='\0';
	int i=0,cnt=0;
	for(i=0;s[i]!='\0';i++)
		if(s[i]==ch)
			cnt++;
	if(cnt==0)
		printf("not foud");
	else
		printf("%d",cnt);
}
