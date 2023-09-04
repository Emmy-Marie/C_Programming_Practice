#include <stdio.h>

/**
 * main - A program that prints the transpose of a matrix.
 * Return: 0 for success
 */

int main()
{
	int a[3][3] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
	int i, j;

	/* Print original matrix */
	printf("Original Matrix a\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}

	/* Print Transpose of matrix */
	printf("Transpose of Matrix a\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
			printf("%d\t", a[j][i]);
		printf("\n");
	}

	return (0);
}
