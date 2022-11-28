#include<stdio.h>
int main()
{
	int n,arr[20]={0},dup[20]={0},i,j,k=0,cnt=0;
	scanf("%d",&n);
	if(n<=0)
	{
		printf("invalid size");
		exit(0);
	}

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	/*	printf("\n");
		for(i=0;i<n;i++)
		printf("%d ",arr[i]);
		*/
	for(i=0;i<n;i++)
	{
		cnt=0;
		for(j=0;j<n;j++)
			if(arr[j]==arr[i])
				cnt++;
		if(cnt>1)
		{
			for(j=0;j<k;j++)
				if(dup[j]==arr[i])
					break;
			if(j==k)
			{
				dup[k]=arr[i];
				k++;
			}
		}


	}
	if(k==0)
		printf("no duplicate elements");
	else
		for(i=0;i<k;i++)
			printf("%d ",dup[i]);

}

