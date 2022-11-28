#include<stdio.h>
#include<string.h>
int main()
{
	char v[100],b[100],*p;
	int i=0;
	printf("Enter Virus Name:");
	gets(v);
	printf("Enter the Blood Composition:");
	gets(b);
	p=v;
	while((p=strchr(p,b[i])))
	{
			i++;
			p++;
			if(*p=='\0')   //After increment you can check the current pointer value is null or not.
				break;
	}
	if(i==strlen(b))
		printf("This %s Blood Group person is positive\n",b);
	else
		printf("This %s Blood Group person is negative\n",b);
}
