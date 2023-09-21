#include <stdio.h>
#include <stddef.h>

/**
 * main - A program that shows how pointer subtractions work
 * Return: 0 for success
 */

int main(void)
{
	int a[] = {10, 20, 30, 40, 50, 60}, diff = 0;
	int *p, *q;
	ptrdiff_t diff_t = 0;

	/* Initialize Pointers */
	p = a;
	q = &a[4];

	/* Print Initial Values */
	printf("::::: Initial Values of Pointers (*p and *q :::::\n");
	printf("*p = %d\n", *p);
	printf("*q = %d\n", *q);

	/* Pointer Subtractions */
	diff = q - p;
	printf("\n::::: Subtraction Results :::::\n");
	printf("q - p = %d\n", diff);
	q = q - 2;
	printf("\nNew value of *q = %d\n", *q);

	/* Using the 'ptrdiff_t data type to find the difference */
	diff_t = q - p;
	printf("q - p is now = %td\n", diff_t);
	return (0);
}
