#include<stdio.h>
#include<stdlib.h>
int n;
void transpose(int (*A)[5] , int (*B)[5])
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			B[i][j] = A[j][i];
}

int main()
{
	int A[5][5] ;//= { {1, 1, 1, 1},{2, 2, 2, 2},{3, 3, 3, 3},{4, 4, 4, 4} };

	int B[5][5], i, j;
	scanf("%d",&n);
	if(n<=1)
	{
		printf("array size is invaid\n");
		return 0;
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &A[i][j]);

	transpose(A,B);

	printf("Result matrix is \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", B[i][j]);
		//		printf("\n");
	}

	return 0;
}
