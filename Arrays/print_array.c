#include <stdio.h>

/**
 * main - A program that prints the elements of an array.
 */

int main()
{
	int a[5], i;

	/* Enter elements of the array */
	for(i = 0; i < 5; i++)
	{
		printf("Enter element a[%d]: ", i);
		scanf("%d", &a[i]);
	}

	/* Print elements of the array */
	for(i = 0; i < 5; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}

	 printf("\nElements in reverse\n");

	/* Print array elements in reverse */
	for(i = 4; i >= 0; i--)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}

	return (0);
}
