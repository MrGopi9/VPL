#include<stdio.h>
int main()
{
	int data,bit,l,r,i;
	scanf("%d",&data);
	//	for(i=31;i>=0;i--)
	//		printf("%d ",(data>>i)&1);
	//	printf("\n"); 
	for(l=31,r=0;l>r;l--,r++)
	{
		if(((data>>l)&1) != ((data>>r)&1))
		{
			data=data^(1<<l);
			data=data^(1<<r);
		}
	}
	for(i=31;i>=0;i--)
		printf("%d",(data>>i)&1);
	printf(" %d\n",data);
}

