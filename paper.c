/*
 
   Q8 Paper of size A0 has dimensions 1189 mm x 841 mm. Each subsequent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides. Write a program to calculate and print paper sizes A0, A1, A2, ….. A8.

   */


#include<stdio.h>
int main()
{
	int i, w=841, h=1189, t;
	for(i=0;i<9;i++)
	{
		printf("%d: %dmm x %dmm\n", i, w, h);
		t = h;
		h = w;
		w = t/2;
	}

}
