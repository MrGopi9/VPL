#include<stdio.h>
int sumofdigit(int n)
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
	 
	return sum;
}
int sort(int n)
{
	int a=9,d=0,r=0,temp;
	temp=n;
	while(temp)
	{
		r=temp%10;
		if(r>a)
			goto next;
		else
			a=r;
		temp/=10;
	}
	return 1;
next:
	temp=n;
	d=0;
	while(temp)
	{
		r=temp%10;
		if(r<d)
			return 0;
		else
			d=r;
		temp/=10;
	}
	return 1;
}
int main()
{
	int min,max;
	scanf("%d%d",&min,&max);
	if(min<0 && max<0)
		printf("both ranges are in negative");
	else if(min<0)
		printf("min range is in negative");
	else if(max<0)
		printf("max range is in negative");
	else if(min==max)
		printf("ranges are same");
	else if(min>max)
		printf("provide proper ranges");
	else    
		for( ;min<=max;min++)
		{
			if(sumofdigit(min)==7)
			{
				if(sort(min))
					printf("%d ",min);
			}
		}
}

