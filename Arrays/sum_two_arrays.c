#include <stdio.h>

/**
 * main - A program that reads two arrays of size 5 and stores the sum of each
 *        equivalent index into a third array of same index.
 * Return:0 for success
 */

int main()
{
	int arr1[5], arr2[5], arr3[5], i;

	/* Enter elements of arr1 and arr2 */
	for(i = 0; i < 5; i++)
	{
		printf("Enter value of arr1[%d]: ", i);
		scanf("%d", &arr1[i]);
		printf("Enter value of arr2[%d]: ", i);
		scanf("%d", &arr2[i]);
	}

	/* Calculate sum and store in third array */
	for(i = 0; i < 5; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
		printf("arr3[%d] = %d\n", i, arr3[i]);
	}

	return (0);
}
