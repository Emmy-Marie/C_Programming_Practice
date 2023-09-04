#include <stdio.h>

/**
 * main - A program that prints the sum of individual array rows & columns.
 * Return: 0 for success
 */

int main()
{
	int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	int i, j, sum_row, sum_col;

	/* Print original array */
	printf("Array Visualization\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}

	/* Print sum of each row */
	sum_row = 0;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
			sum_row = sum_row + a[i][j];
		printf("Sum of elements in row[%d] = %d\n", i, sum_row);
	}

	/* Print sum of each column */
	sum_col = 0;
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 3; j++)
			sum_col = sum_col + a[j][i];
		printf("Sum of elements in column[%d] = %d\n", i, sum_col);
	}
	return (0);
}
