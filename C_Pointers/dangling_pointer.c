#include <stdio.h>
#include <stdlib.h>

/**
 * main - A simple program showing a dangling pointer
 * Return: 0 for success
 */

int main(void)
{
	/* Allocate memory for an int */
	int *ptr = (int *)malloc(sizeof(int));

	/* Assign a value to the allocated memory */
	*ptr = 100;
	printf("Value of *ptr = %d\n", *ptr);

	free(ptr); /* Memory location that ptr points to has been freed */

	/* Attempting to access 'ptr' after it has been freed */
	printf("Value after freeing: *ptr = %d\n", *ptr); /* ptr now dangling */

	return (0);
}
