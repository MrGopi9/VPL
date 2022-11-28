#include<stdio.h>
int TestPrime(int);
int cnt_digits(int);
int main()
{
	int n;
	scanf("%d",&n);

	if(n<0)
	{
		printf("wrong input\n");
		return 0;
	}


	if(TestPrime(n))
	{

		if(n>=0 && n<=9)
			printf("Single-digit prime");
		else if(n>9)
			if((cnt_digits(n)%2)==0)
				printf("Even-digit prime");
			else 
				printf("Odd-digit prime"); 
	}  
	else 
		printf("Not a prime");
}   

int TestPrime(int x)
{
	int a,count=0;

	for(a=1;a<=x;a++)
		if((x%a)==0)
			count++;
	if(count==2)
		return 1;
	else
		return 0;
}


int cnt_digits(int c)
{
	int cnt=0;
	while(c)
	{
		cnt++;
		c/=10;
	}

	return cnt;
}








