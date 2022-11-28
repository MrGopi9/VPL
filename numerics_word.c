#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[50],*p,num[10][7]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	int l,i,y=9;
	gets(s);

	for(i=0;s[i];i++)
	{
		if(s[i]>=48 && s[i]<=57)
		{
			y=s[i]-48;
			l=strlen(num[y]);

			memmove(s+i+l,s+i+1,strlen(s+i+1)+1);
			strncpy(s+i,num+y,strlen(num+y));

		}
	}
    if(y==9)
        printf("Numeric character not found\n");
    else
	    puts(s);
}
