#include <stdio.h>

/**
 * main - A program showing how double pointers and higher level pointers work.
 * Return: 0 for success.
 */

int main(void)
{
	int a = 10;
	int *p; /* Pointer */
	int **q; /* Double pointer */
	int ***r; /* 3-Level pointer */

	/* Initialize pointers */
	p = &a;
	q = &p;
	r = &q;

	/* Print Values */
	printf("::::: Accessing Values of a :::::\n");
	printf("Value of 'a' = %d\n", a);
	printf("Value of 'a' via *p = %d\n", *p);
	printf("Value of 'a' via **q = %d\n", **q);
	printf("Value of 'a' via ***r = %d\n", ***r);

	/* Modify value of a */
	***r = 1000;
	printf("\nNew value of 'a' = %d\n", a);

	/* Print some addresses */
	printf("\nAddress of 'q' = %p\n", (void *)&q);
	printf("Value of 'r' = %p\n", (void *)r);

	return (0);
}
