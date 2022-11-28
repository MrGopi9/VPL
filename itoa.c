#include<stdio.h>
int main()
{
	int n,i=0,j=0,sign=0;
	scanf("%d",&n);
	char s[20],ch;
	if(n<0)
	{
		s[0]='-';
		i++;
		j=1;
		n=-n;
	}
	
	while(n)
	{
		s[i]=n%10+48;
		n/=10;
		i++;
	}
	s[i]='\0';
//	puts(s);
	for(i=i-1; j<i ; j++ ,i--)
	{
		ch=s[i];
		s[i]=s[j];
		s[j]=ch;
	}
	puts(s);

}



