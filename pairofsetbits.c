#include<stdio.h>
int main()
{
	int n,i,c=0;
	scanf("%d",&n);
	for(i=31;i>=0;i--)
		printf("%d ",(n>>i)&1);
	for(i=0;i<=31;i++)
	{
		if(((n>>i)&1)&&((n>>(i+1))&1))
		{
			i++;
			c++;
		}
		if(i>=30)
			break;
	}
	printf("\n%d\n",c);
}

