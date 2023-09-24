#include <stdio.h>

/**
 * main - A program that defines a Null pointer
 * Return: 0 for success
 */

int main(void)
{
	/* Declaring and initializing a Null pointer */
	int *ptr = NULL;

	if (ptr == NULL)
		printf("ptr is a Null pointer\n");
	else
		printf("Value of *ptr = %d\n", *ptr);

	return (0);
}
