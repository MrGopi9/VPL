#include<stdio.h>
#include<stdlib.h>
int cnt=0;
int sumofdigits(int n)
{
	
	if(n==0)
		return 0;
	else
	{
		cnt++;
		return (sumofdigits(n/10)+(n%10));
	}
}
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	if(n==0)
	{
		cnt++;
		printf(" sum=%d , count=%d\n",sum,cnt);
		return 0;
	}
	else if(n<0)
		n=-n;
		
	sum=sumofdigits(n);
	printf(" sum=%d , count=%d",sum,cnt);
}
