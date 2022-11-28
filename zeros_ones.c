
///write a program to replace all 0's with 1 in a given integer
#include<stdio.h>
int z=0;
int replace(int n)
{
	if(n==0)
		return 0;
	int rem;
	rem=n%10;
	if(rem==0)
	{
		rem=1;
		z=1;
	}
	return (replace(n/10)*10)+rem;



}
int main()
{
	int data,temp,sign=0;
//	printf("enter the data:");
	scanf("%d",&data);
	if(data<0)
	{
		data=-data;
		sign=1;
	}
	if(data==0)
	{
		data=1;
		printf("%d",data);
		return 0;
	}



	data=replace(data);
	if(sign==1)
		data=-data;
	if(z==0)
		printf("no zeros in input\n");
	else
		printf("%d",data);
}





