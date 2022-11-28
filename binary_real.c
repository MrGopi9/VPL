#include<stdio.h>
#include<stdio.h>
int main()
{
	float f=50.4;
	double d=50.4;
	unsigned char *p,ch=130;
	int bit,i;
	/*
	p=&f;
	p+=3;
	for(i=3;i>=0;i--,printf(" "))
	{
		for(bit=7;bit>=0;bit--)
			printf("%d",((*p)>>bit)&1);
		p--;
	}
*/
	scanf("%lf",&d);

	printf("\n%e\n",d);
	p=&d;
	p+=7;
	for(i=7;i>=0;i--,printf(" "))
	{

		for(bit=7;bit>=0;bit--)
			printf("%d",((*p)>>bit)&1);
		p--;
	}

/*
 // can not perform shiofting operation on real number .
	union s
	{
		double d;
		float f;
	}v;
//	int bit;
	printf("\n");
	scanf("%f",&v.f);
	printf("\n");
	printf("%lf   %f \n",v.d,v.f);
	printf("\n");
*/	/*
	for(bit=63; bit>=0;bit--)
		printf("%d ",((v.d)>>bit)&1);
	printf("\n");

*/
}


