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
	int  min,max,sum=0,d;
	scanf("%d%d",&min,&max);


	if(min > max)
		printf("invalid range\n");
	else
		for(min;min<=max;min++)
		{
			sum=min;
again:
			sum=sumofdigits(sum);
			if(sum>9)
				goto again;
			else if(sum==9)	
				printf("%d ",min);
		}
}
