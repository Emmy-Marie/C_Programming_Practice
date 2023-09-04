#include <stdio.h>

/**
 * main - A program that reads 10 integers of an array and counts the number of
 *        odd and even integers.
 * Return: 0 for success
 */

int main()
{
	int a[10], i, odd_count, even_count;

	/* Read array integers */
	for(i = 0; i < 10; i++)
	{
		printf("Enter integer[%d]: ", i);
		scanf("%d", &a[i]);
	}

	/* Count even and odd numbers */
	odd_count = 0;
	even_count = 0;
	for(i = 0; i < 10; i++)
	{
		if(a[i] % 2 == 0)
			even_count++;
		else
			odd_count++;
	}

	/* Print od and even counts */
	printf("Total count of odd numbers in the array = %d\n", odd_count);
	printf("Total count of even numbers in the array = %d\n", even_count);

	return (0);
}
