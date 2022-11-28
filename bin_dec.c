#include<stdio.h>
int main()
{
	char a[32];
	int i,j=0,r=0;
	//for(i=0;i<=7;i++)
	//	scanf("%d",&a[i]);
	//i=7;
	scanf("%s",a);
	i=strlen(a)-1;
	while(i>=0)
	{
		if(a[i]=='1')
			r=r+pow(2,j);
//		else if(a[i]>1 || a[i]<0)
		else if(a[i]!='0')
		{
			printf("invalid input\n");
			return 0;
		}
		i--;
		j++;
	}
	printf(" %d \n",r);
}
