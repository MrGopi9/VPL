#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int countDigit(int );
void printTens(int d);
void printNum(int );
int main()
{
	int num1,n,num,cnt=0,digit;
	scanf("%d",&num);
	if(num<0)
	{
		printf("invalid");
		return 0;
	}
	if(num==0)
	{
		printf("zero only\n");
		return 0;
	}
	if(num>9999)
	{
		printf("invalid, supported 0 to 9999 only");
		return 0;
	}
	n=countDigit(num);
	num1=num;
	num=0;
	for( ;num1;num1/=10)
		num=num*10+num1%10;
	while(n)
	{
		switch(n)
		{
			case 4:digit=num%10;
			       printNum(digit);
			       printf("thousand ");
			       num=num/10;
			       n--;
			       break;
			case 3:digit=num%10;
			       printNum(digit);
			       if(digit!=0)
				       printf("hundred ");
			       num=num/10;
			       n--;
			       break;
			case 2:digit=num%10;
			       if(digit==0)
				       ;
			       else if(digit==1 && ((num/10)==0))
			       {
				       printf("ten ");
				       goto out;
			       }
			       else if(digit==1 && ((num/10)>0))
			       {
				       printTens(num/10);
				       goto out;
			       }
			       else if(digit>1)
				       switch(digit)
				       {
					       case 2:printf("twenty ");break;
					       case 3:printf("thirty ");break;
					       case 4:printf("fourty ");break;
					       case 5:printf("fifty ");break;
					       case 6:printf("sixty ");break;
					       case 7:printf("seventy ");break;
					       case 8:printf("eighty ");break;
					       case 9:printf("ninety ");break;

				       }

			       num=num/10;
			       n--;
			       break;
			case 1:digit=num%10;
			       printNum(digit);
			       n--;
			       break;
		}
		if(num==0)
			goto out;
	}
out:
	printf("only");

}
void printNum(int num)
{
	switch(num)
	{
		case 1:printf("one ");break;
		case 2:printf("two ");break;
		case 3:printf("three ");break;
		case 4:printf("four ");break;
		case 5:printf("five ");break;
		case 6:printf("six ");break;
		case 7:printf("seven ");break;
		case 8:printf("eight ");break;
		case 9:printf("nine ");break;
		default:break;
	}
}
int countDigit(int num)
{
	int i=0;
	for(;num>0;num/=10,i++);
	return i;
}

void printTens(int d)
{
	switch(d)
	{
		case 1:printf("Eleven ");break;
		case 2:printf("Twelve ");break;
		case 3:printf("Thirteen ");break;
		case 4:printf("Fourteen ");break;
		case 5:printf("Fifteen ");break;
		case 6:printf("sixteen ");break;
		case 7:printf("seventeen ");break;
		case 8:printf("eighteen ");break;
		case 9:printf("nineteen ");break;
		default:break;
	}
} 
