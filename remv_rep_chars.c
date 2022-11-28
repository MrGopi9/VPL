#include<stdio.h>
int main()
{
	char s[30],ch;
	gets(s);
	int i=0,j,k;
	for(i;s[i];i++)
	{
		ch=s[i];
		k=0;
		for(j=i+1;s[j];j++)
			if(s[j]==ch)
			{
				k=1;
				memmove(s+j,s+j+1,strlen(s+j+1)+1);
				j--;
			}
		if(k==1)
		{
			memmove(s+i,s+i+1,strlen(s+i+1)+1);
			i--;
		}

	}
	puts(s);
}

