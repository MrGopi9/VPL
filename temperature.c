#include<stdio.h>
void main()
{
	int choice;
	float input;

//	while(1)
//	{
//		printf("1. fahrenheit to celsius\n2.celsius to farenheit \n");
		scanf("%d",&choice);
//		printf("Enter input : \n");
		scanf("%f",&input);
		choice==1?printf("%.2f C\n",(input-32)/1.8):choice==2?printf("%.2f F\n",(1.8 * input) + 32):printf("wrong choice\n");
//	}




}
