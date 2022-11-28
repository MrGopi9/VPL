#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[50],*p,num[10][7]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	int cnt=0,l=0,i,y;
	scanf("%d",&i);
	if(i<0)
	{
		printf("minus ");
		i=-i;
	}
	else if(i==0)
	{
		puts("zero");
		return 0;
	}
	
	
	while(i)
	{
		if((i%10)!=0)
			break;
		cnt++;	
		i/=10;
	}


	while(i)
	{
		l=l*10+i%10;
		i/=10;
	}
	while(l)
	{
		printf("%s ",num[l%10]);
		l/=10;
	}
	while(cnt)
	{
		printf("zero ");
		cnt--;
	}
}
