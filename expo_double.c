#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define DBL_DIG 7
char *RealToExponential(char *d, double x)
{
	char buf[100],*e,*zero;
	int power;

	//sprintf(buf, "%.*e", DBL_DIG, x);
	sprintf(buf, "%e", x);
	puts(buf);
	e = strchr(buf,'e');  // find exponent position
	if(e) 
	{
		zero = e;
		while (zero[-1] == '0') 
			zero--; 
		*zero = '\0'; 
		power = atoi(e+1);  // converting to int
		sprintf(d, "%s%s%d", buf, "e+", power);
	}
	else 
	{
//		strcpy(d, buf);
	}
	return d;
}

int main() 
{
	char buf[100];
	double d;
	scanf("%lf",&d);
	puts(RealToExponential(buf,d));
}
