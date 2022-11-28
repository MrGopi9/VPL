#include<stdio.h>
int main()
{
	int data,temp1,temp2,rem1,rem2,cnt;
	//printf("enter data:");
	scanf("%d",&data);
	if(data<0)
		data=-data;

	if(data<=9)
		printf("%d",data);
	else
	{   
		/*
		if(data<0)
			data=data*-1;
			*/
		temp1=data;
		while(data)
		{  
			temp2=temp1;
			cnt=0;
			rem1=data%10;
/* inner loop for test rem1 in actual data */
			while(temp2)
			{
				rem2=temp2%10;
				if(rem1==rem2)
				{
					cnt=cnt+1;
				}
				temp2=temp2/10;

			}
			if(cnt==1)
				printf("%d ",rem1);
			data=data/10;
		}
	}

}
