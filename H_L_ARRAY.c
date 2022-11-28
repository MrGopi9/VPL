#include<stdio.h>
int main()
{
	int a[20],i,j,n,min,max;
	scanf("%d",&n);
	if(n<=0)
	{
		printf("invalid size\n");
		return 0;
	}
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	min=max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[0]!=a[i])
			break;
	}
	if(i==n)
	{
		printf("all elements are same\n");
		return 0;
	}
	
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		
		if(a[i]<min)
			min=a[i];
	}
	printf("highest=%d lowest=%d\n",max,min);
}




	




