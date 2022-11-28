#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,n,r,fh=0,sh=0,f=0;
	scanf("%d",&n);
	x=n;
	r=x%10;
	while(x)
	{ if(r==x%10)
		x/=10;

		else
		{
			f=1;
			break;
		}
	}
	/*if(n==0)
	  {
	  printf("you have supplied single digit only");
	  exit(0);
	  }*/
	if((n>=-9 && n<=9))
	{
		printf("you have supplied single digit only");
		exit(0);
	}
	else if(f==0)
	{
		printf("all digits are same");
		exit(0);
	}
	else if(n<-9)
		n=-n;


	while(n)
	{
		r=n%10;
		if(r>fh)//fh=5
		{
			sh=fh;
			fh=r;
		}
		else if(r>sh)//sh=5
		{
			sh=r;
		}
		n/=10;

	}


	printf("%d",sh);

}
