#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *mystrncpy(char *dest , const char *src , int n)
{
	int i=0;
	for(i=0;i<n && src[i]!='\0';i++)
		dest[i]=src[i];
	for(i;i<n;i++)
		dest[i]='\0';
	

	dest[i]='\0';
	return dest;
}


int main()
{
	char str1[20],str2[20]="123456789",str3[10];
	int n;
	fgets(str1,20,stdin);
	fgets(str2,20,stdin);
	scanf("%d",&n);
	if(n<0)
	{
	    printf("invalid size");
	    exit(0);
	}
	
	str1[strlen(str1)-1]='\0';
	str2[strlen(str2)-1]='\0';
	if(n!=0)
	mystrncpy(str1,str2,n);
	
	printf("%s",str1);
}
