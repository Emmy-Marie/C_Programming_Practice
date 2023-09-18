#include <stdio.h>

/**
 * main - A simple program about how pointer assignment works
 * Return: 0 for success
 */

int main(void)
{
	int a = 10, b = 20;
	int *p, *q;

	/* Initialize pointers */
	p = &a;
	q = &b;

	/* Print values */
	printf("::::: Original Values :::::\n");
	printf("a = %d, b = %d, *p = %d, *q = %d\n", a, b, *p, *q);

	/* Assign value of ptr_1 to ptr_2 */
	q = p;
	printf("\n*q is now equal to %d\n", *q);

	/* Modify b using q */
	q = &b; /* Pointing q back to b */
	*q = *p;
	printf("Value of b after modifying *q = %d\n", b);
	return (0);
}
