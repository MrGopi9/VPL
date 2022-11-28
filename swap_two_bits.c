#include<stdio.h>
int main()
{
	int n,b1,b2,i;
	scanf("%d%d%d",&n,&b1,&b2);
	if(b1>31 || b1<0 || b2>0 || b2>31)
	{
		printf("ERROR\n");
		return 0;
	}
	if(((n>>b1)&1)!=((n>>b2)&1))
	{
		n=n^(1<<b1);
		n=n^(1<<b2);
	}
	for(i=31;i>=0;i--)
		printf("%d",(n>>i)&1);
	printf(" %d\n",n);
}

