#include<stdio.h>
int prime(int);
int sumofdigits(int n)
{
	int sum=0;
loop:
	while(n)
	{
		sum=sum+(n%10);
		n/=10;
	}

	if(sum>9)
	{
		n=sum;
		sum=0;
		goto loop;
	}
	else if(sum==2)
		return 1;
	else 
		return 0;
}

int main()
{
	int min,max;
	scanf("%d%d",&min,&max);
	if(max<2)
		printf("give valid range");
	else if(min<0 || max<0)
		printf("give valid range");
	else
	{
		//check 2 or not 
		//if it is 2 ---> print and inc(++)
		//else if , if it is even then ,inc ( ++ )
			
		for( ;min<=max ;min++)
		{
			if(prime(min)==1)
				if(sumofdigits(min)==1)
					printf("%d ",min);
		}
	}



}
int prime(int n)
{
	int i;
	for(i=2;i<=(n/2);i++)
		if(n%i==0)
			return 0;


	return 1;
}

