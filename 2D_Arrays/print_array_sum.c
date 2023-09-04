#include <stdio.h>

/**
 * main - A program that prints all the elements of a 2D array in matrix
 *        form and calculates the sum of all the array elements.
 * Return: 0 for success
 */

int main()
{
	int a[3][3], i, j, sum;

	printf("Enter all the elements of the array\n");

	/* Read in the elements of the array */
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	/* Print the elements in matrix form and calculate the sum */
	sum = 0;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
			sum = sum + a[i][j];
		}
		printf("\n");
	}
	printf("Sum of array elements = %d\n", sum);

	return (0);
}
