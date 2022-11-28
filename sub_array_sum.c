/*Problem Statement
  Given an array of positive numbers and a positive number ‘k,’ find the maximum sum of any contiguous subarray of size ‘k’.

  Example 1:

Input: [2, 1, 5, 1, 3, 2], k=3 
Output: 9
Explanation: Subarray with maximum sum is [5, 1, 3].
Example 2:

Input: [2, 3, 4, 1, 5], k=2 
Output: 7
Explanation: Subarray with maximum sum is [3, 4].*/
#include<stdio.h>

int main()
{
	int arr[10],sub;
	int k,n,i,j,sum,h_s=0;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		__fpurge(stdin);
		scanf("%d",&arr[i]);
	}
	__fpurge(stdin);
	scanf("%d",&k);


	for(i=0;i<(n-k);i++)
	{
		sum=0;
		for(j=0;j<k;j++)
			sum+=arr[i+j];
		if(sum>h_s)
		{
			sub=i;
			h_s=sum;
		}
	}

	printf("%d %d\n",h_s,sub);
	for(i=0;i<k;i++)
		printf("%d ",arr[i+sub]);

}





