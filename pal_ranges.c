#include<stdio.h>
int main()
{
	int min,max,n,x;
	scanf("%d%d",&min,&max);
	for(min;min<=max;min++)
	{
		n=min;
		x=0;
		while(n)
		{
			x=x*10+(n%10);
			n/=10;
		}
	
		if(x==min)
			printf("%d ",min);
	}
}
