// C program to check two matrices are identical or not

#include <stdio.h>

void input(int (*p)[5] , int n)
{
	srand(getpid());

	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			p[i][j]=rand()%100;




}
void display(int (*p)[5] , int n)
{
	srand(getpid());

	int i,j;
	for(i=0;i<n;i++,printf("\n"))
		for(j=0;j<n;j++)
			printf("%d ",p[i][j]);




}

int areIdentical(int Matrix1[][5], int Matrix2[][5],int n)
{
	int i ,j ;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (Matrix1[i][j] != Matrix1[i][j])
				return 0;
		}
	}
	return 1;
}

int main()
{
	int Matrix1[5][5],Matrix2[5][5] ,n;
	scanf("%d",&n);
	if(n<=1)
	{
		printf("no.of rows and cols invalid\n");
		return 0;
	}
	
	input(Matrix1,n);
	input(Matrix2,n);
	display(Matrix2,n);
	display(Matrix2,n);

	


	if (areIdentical(Matrix1, Matrix2,n))
		printf("Both matrices are identical\n");
	else
		printf("Matrices are not identical\n");

	return 0;
}

