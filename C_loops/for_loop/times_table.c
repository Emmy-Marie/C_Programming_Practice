#include <stdio.h>
#include <stdbool.h>

/**
 * main - A program that prints the times table of an integer using for loop.
 *        Max multiplier = 12.
 * Return: 0 if success and 1 if fail
 */

int main()
{
	unsigned int i, result;
	unsigned short int j;

	printf("Enter a positive number: ");
	scanf("%u", &i);

	getchar();

	if(i <= 0)
	{
		printf("Error! Invalid Entry\n");
		return (1);
	}

	printf("========== %u times table ============\n", i);

	for(j = 1; j <= 12; j++)
	{
		result = i * j;
		printf("%u * %u = %u\n", i, j, result);
	}
	printf("========== END ==========\n");

	return (0);
}
