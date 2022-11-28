#include <stdio.h>

int main()
{
  int a[5],i,j,temp;
  printf("Enter 5 Element of array\n");
  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);	  
  }	  

  printf("Array Before Sorting:\n");
  for(i=0;i<5;i++)
  {
    printf("%d ",a[i]);	  
  }	  

  for(i=0;i<4;i++)
  {
    for(j=i+1;j<=4;j++)
    {
      if(a[i]>a[j])	    
      {
        a[i]^=a[j]^=a[i]^=a[j];	      
      }	
    }	    
  }

  printf("Array After Sorting:\n");
  for(i=0;i<5;i++)
  {
    printf("%d ",a[i]);	  
  }	  
}  
