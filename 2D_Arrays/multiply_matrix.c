#include <stdio.h>

/**
 * main - A program that multiplies two matrices.
 * Return: 0 for success
 */

int main(void)
{
	int a[2][3], b[3][2], c[2][2], i, j, k, sum;

	/* Enter array elements a */
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Enter a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	/* Enter array elements b */
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Enter b[%d][%d]: ", i, j);
			scanf("%d", &b[i][j]);
		}
	}

	/* Print arrays a and b */
	printf("\nArray a\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
	printf("\nArray b\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%d\t", b[i][j]);
		printf("\n");
	}

	/* multiply matrices and print array c */
	printf("\nArray c\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			sum = 0;
			for (k = 0; k < 3; k++)
				sum = sum + a[i][k] * b[k][j];
			c[i][j] = sum;
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	return (0);
}
