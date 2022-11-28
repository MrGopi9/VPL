#include <stdio.h>
  
int main()
{
        int a=0,b=1,c=0,n,min,max;

        //      printf("Enter the range in between which fibonacci series to generated\n");
        scanf("%d%d",&min,&max);
       
        if(min<0 && max>=0)
                printf("min range is invalid");
        else if(max<0 && min>=0)
                printf("max range is invalid");
        else if(min<0 && max<0)
                printf("both inputs invalid");
        
        else
        {
                  if(min==c)
                  {
                          printf("%d %d ",a,b);
                        
                  }
                               
        
                while(c<=max)
                {
                        c=a+b;
                        if(c>=max)
                                break;
                        if(c>=min)
                                printf("%d ",c);
                                                   
                     
                        a=b;
                        b=c;

               }
        }


}
