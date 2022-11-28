#include<stdio.h>
int main()
{
	int n,h=0,l=10,r,x=0;
	h=0;l=9;
	scanf("%d",&n);

	if(n<=9 && n>=-9)
		printf("supplied input is sigle digit only\n");
	else
	{
		if(n<-9)
			n=-n;

		while(n)
		{
			r=n%10;
			if(r>h)
				h=r;
			else if(r<l)
				l=r;
			n/=10;

			printf("highest:%d\nlowest:%d\n",h,l);
		}
		if(h==l)
			printf("all digits in supplied input is same \n");
		else
			printf("highest:%d\nlowest:%d\n",h,l);


	}
}


