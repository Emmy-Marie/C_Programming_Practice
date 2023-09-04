#include <stdio.h>

/**
 * main - A program that prints the addition of two matrices
 * Return: 0 for success
 */

int main(void)
{
	int a[2][3], b[2][3], sum[2][3], i, j;

	/* Enter Array elements */
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Enter a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
			printf("Enter b[%d][%d]: ", i, j);
			scanf("%d", &b[i][j]);
		}
	}

	/* Print matrix a */
	printf("\nArray a\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
	/* Print matirx b */
	printf("\nArray b\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d\t", b[i][j]);
		printf("\n");
	}

	/* Calculate sum and print sum array */
	printf("\nSum Array\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}
	return (0);
}
