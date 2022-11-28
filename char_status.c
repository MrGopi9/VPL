#include<stdio.h>
#include<stdio_ext.h>

int main()
{
	char ch,*p;
//	while(1)
//	{
		__fpurge(stdin);
		ch=getchar();
		/*
		//scanf(" %c",&ch);
		ch>=65 && ch<=90?printf("UPPER CASE\n"):ch>=97 && ch<=122?printf("lower case\n"):ch>=48 && ch<=57?printf("numaric char\n"):printf("special symbol\n");
	
	
	ch>64 && ch<91?ch=ch+32:ch>96 && ch<123?ch=ch-32:printf("supplied char is not a alpha\n");
	printf(" %c\n",ch);
	*/
		if(ch>64 && ch<91)
			ch+=32;
		else if(ch>96 && ch<123)
			ch-=32;
		else
		{
			printf("wrong input");
			return 0;
		}


		putchar(ch);
		printf("%lu",sizeof(*p));

	
	
	
	
//	}
}

