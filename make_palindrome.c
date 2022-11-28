#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int palindrome(char *);
int passing(char *);
int main()
{
	char s[20];
	int n;
	printf("enter the string\n");
	gets(s);
	n=passing(s);
	if(n==-1)
		printf("already a palindrome\n");
	else if(n>=0)
		printf("%d\n",n);
	else
		printf("can not be a plindrome\n");
}







int palindrome(char *p)
{
	int i,j;
	for(i=0,j=strlen(p)-1;i<j;i++,j--)
		if(p[i]!=p[j])
			return 0;

	return 1;



}






int passing(char *p)
{
	char s[20];
	int i,j,k;
	if(palindrome(p)==1)
		return -1;
	else
		for(i=0;p[i];i++)
		{
			for(j=0,k=0;p[j];j++)
				if(j!=i)
					s[k++]=p[j];

			s[k]='\0';
			if(palindrome(s)==1)
			{
				return i;
			}
		}

	return -2;
}

