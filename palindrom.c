#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s[20];
	gets(s);
	int i=0,j=strlen(s)-1;
	for(i,j;i<j;i++,j--)
		if(s[i]!=s[j])
			break;
	if(i<j)
		puts("Not palindrome");
	else
		puts("palindrome");
}
