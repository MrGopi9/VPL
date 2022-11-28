/* shift left/right array by 1/more times */

#include <stdio.h>

int main()
{
	int SIZE;	
	//printf("Enter value for no of element to be reserved for array\n");
	scanf("%d",&SIZE);  
	if(SIZE<=0)
	{
		printf("No of elements are invalid\n");
		return 0;
	}

	int a[100],i;
	for(i=0;i<SIZE;i++)
	{
		//printf("Enter value for a[%d]=",i);
		scanf("%d",&a[i]);    
	}	  

/*	printf("Array Element are:\n"); 
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",a[i]);	  
	}	  
*/
	char choice;
//	printf("\nEnter choice for array shifting as \n'r' for right\n'l' for left\n");
	scanf(" %c",&choice);

	int nOS;
//	printf("Enter how many positions to shift\n");
	scanf("%d",&nOS);

	while(nOS>0)
	{	  
		int temp;
		if(choice=='r')
		{
			for(i=SIZE-1;i>=0;i--)	
				a[i]=a[i-1];

			a[0]=0;     
		}
		else if(choice=='l')
		{
			for(i=0;i<SIZE-1;i++)
				a[i]=a[i+1];

			a[SIZE-1]=0;      
		}
		nOS--;
	}   

//	printf("Array Element are:\n"); 
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",a[i]);	  
	}	  
	printf("\n");
}  
