#include<stdio.h>
void sort(char *p)
{
	int i=0,j;
	char ch;
	for(i=strlen(p)-1;i>0;i--)
	{
		for(j=0;j<i;j++)
			if(p[j]>p[i])
			{
				ch=p[i];
				p[i]=p[j];
				p[j]=ch;
			}
	}
}




int main()
{
	char s1[20],s2[20];
	gets(s1);
	gets(s2);

	sort(s1);
	sort(s2);
	if(strcmp(s1,s2)==0)
		puts("Anagram strings");
	else
		puts("Not anagram strings");
}

