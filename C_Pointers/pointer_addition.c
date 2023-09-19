#include <stdio.h>

/**
 * main - A simple program showing the working operation of
 *        addition in pointer arithmetic
 * Return: 0 for success
 */

int main(void)
{
	int a[5] = {10, 20, 30, 40, 50}, i;
	int *p = &a[0]; /* p points to a[0] */

	printf("Start: a[0] = %d & address = %p\n", a[0], (void *)&a[0]);
	printf("Start: Address value of p = %p\n", (void *)p);

	/* Pointer Addition */
	for (i = 1; i < 5; i++)
	{
		p = p + 1;
		printf("\n::::: When p points to a[%d] :::::\n", i);
		printf("a[%d] = %d\n", i, a[i]);
		printf("Address of a[%d] = %p\n", i, (void *)&a[i]);
		printf("Current address value of p = %p\n", (void *)p);
	}
	return (0);
}
