#include<stdio.h>
int main()
{
	int n,i,j,cnt=0,ls=0,bit_pos;
	scanf("%d",&n);

	for(i=31;i>=0;i--)
		printf("%d ",(n>>i)&1);

	for(i=31;i>=0;i--)
	{
		if((n>>i)&1)
		{
			cnt=1;
			j=i-1;
			while(j>=0 && ((n>>j)&1) )
			{
				cnt++;
				j--;
			}
			if(cnt>ls)
			{
				ls=cnt;
				bit_pos=i;
			}
			i=j;
		}
	}
	printf("\nls:- %d  starts at  %d\n",ls,bit_pos);
}



