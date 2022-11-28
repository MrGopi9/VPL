/*
   Write a program to find out the GCD and LCM of two integers.

   Example-:

Input:

12

34

Output:

GCD: 2
LCM: 204
*/


#include<stdio.h>
int main()
{
	int a,b,n1,n2,l,g;

	scanf("%d%d",&n1,&n2);

	if(n1>n2) 
		b=n1;
	else      
		b=n2;

	for(a=1;a<=b;++a)
	{
		if(n1%a==0&&n2%a==0)
		{
			g=a;
		}
	}

//	l=(n1*n2)/g;

	printf("GCD: %d\n",g);


	printf("LCM: %d",l);


}

