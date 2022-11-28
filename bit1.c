#include<stdio.h>
int main()
{
	int bit,n,b1,b2;

	scanf("%d%d%d",&n,&b1,&b2);


	if(b1<0 || b1>31 || b2<0 || b2>31)
	{
		printf("ERROR\n");
		return 0 ;
		//exit(0);
	}
	else
	{
		if(((n>>b1)&1) != ((n>>b2)&1)) 
		{
			n=n^(1<<b1);
			n=n^(1<<b2);
		}
	}
	for(bit=31;bit>=0;bit--)
	{
		printf("%d",(n>>bit)&1);
	}
	printf(" %d",n);


}
