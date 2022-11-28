#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,r=1,arr[20],i,j,cnt=0;
	scanf("%d",&n);
	if(n<=0)
	{
		printf("invalid size");
		exit(0);
	}
	else if(n>20)
	{
		printf("Memory Overflow");
		exit(0);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	cnt=arr[0];
	for(i=1;i<n;i++)
		if(arr[i]!=cnt)
			break;
	if(i==n)
	{
		printf("no non-repeated elements\n");
		exit(0);
	}
	
//	printf("%d\n",n);
	//	for(i=0;i<n;i++)
	//		printf("%d ",arr[i]);

	for(i=0;i<n;i++)
	{
		cnt=0;
		for(j=0;j<n;j++)
			if(arr[j]==arr[i])
				cnt++;
		if(cnt==1)
		{
			printf("%d ",arr[i]);
		}


	}

}

