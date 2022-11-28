#include<stdio.h>
int main()
{
	int arr[100],n,n1,a,b,c,temp,var;
	scanf("%d",&n);
	n1=n;
	if(n<=0)
	{
		printf("invalid size\n");
		return 0;
	}
	if(n>100)
	{
		printf("Memory Overflow");
		exit(0);

	}

	for(c=0;c<n;c++)
	{
again:
		scanf("%d",&var);

		if((var>=0)&&(var<=1000))
			arr[c]=var;
		else
			goto again;
	}

	for(a=0;a<n;a++)
	{
		if(arr[a]==0)
		{
			for(b=a;b<(n-1);b++)
				arr[b]=arr[b+1];
			arr[b]=0;
			a--;
			n--;
		}
	}
	for(a=0;a<n1;a++)
	{
		printf("%d ",arr[a]);
	}





}

