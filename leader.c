#include<stdio.h>
int main()
{
	int i,j,n;
	int arr[50];
	scanf("%d",&n);
	if(n<0)
	{
		printf("invalid size");
		return 0;
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			if(arr[j]>arr[i])
				break;
		if(j==n)
			printf("%d ",arr[i]);
	}
}

