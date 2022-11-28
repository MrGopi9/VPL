/* rotate left/right array by 1/more times */

#include <stdio.h>

int main()
{
	int SIZE;	
	//  printf("Enter value for no of element to be reserved for array\n");
	scanf("%d",&SIZE);  
	if(SIZE<=0)
	{
		printf("No of elements are invalid\n");
		return 0;
	}
	int a[100],i;
	for(i=0;i<SIZE;i++)
	{
		//    printf("Enter value for a[%d]=",i);
		scanf("%d",&a[i]);    
	}	  

	/*printf("Array Element are:\n"); 
	  for(i=0;i<SIZE;i++)
	  {
	  printf("%d ",a[i]);	  
	  }	  
	  */
	char choice;
	//printf("\nEnter choice for array rotation as \n'r' for right\n'l' for left\n");
	scanf(" %c",&choice);

	int nOR;
	//  printf("Enter how many positions to rotate\n");
	scanf("%d",&nOR);

	while(nOR>0)
	{	  
		int temp;
		if(choice=='r')
		{
			temp=a[SIZE-1];
			for(i=SIZE-1;i>=0;i--)
			{   a[i]=a[i-1];     }
			a[0]=temp;    
		}
		else if(choice=='l')
		{
			temp=a[0];
			for(i=0;i<SIZE-1;i++)
			{ a[i]=a[i+1];      }
			a[SIZE-1]=temp;    
		}
		nOR--;
	}   

	//printf("Array Element are:\n"); 
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",a[i]);	  
	}	  
	printf("\n");
}  
