#include<stdio.h>
int z=0;
int main()
{
	int r,n,temp,s=0,rev=0;
	scanf("%d",&n);


	if(n==0)
	{
		n=1;
		printf("%d",n);
		exit(0);
	}
	else if( n<0)
	{
		s=1;
		n=-n;
	}

	temp=n;
	n=check_zeros(temp);
	if(z==0)
		printf("no zero's in give number");
	else
	{
		if(s==1)
			n=-n;

		printf("%d",n);
	}
}

int check_zeros(int temp)
{
	int r,rev=0;
	while(temp)
	{
		r=temp%10;
		if(r==0)
		{
			z=1;
			rev=rev*10+1;
			goto skip;
		}
		rev=rev*10+r;
skip:
		temp/=10;

	}

	while(rev)
	{
		temp=temp*10+(rev%10);
		rev/=10;
	}
	return temp;




}
