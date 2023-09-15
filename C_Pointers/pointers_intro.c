#include <stdio.h>

/**
 * main - A simple program that shows a basic understanding of using pointers,
 *        address-of & dereferencing operators.
 * Return: 0 for success
 */

int main(void)
{
	int a = 10, b = 20;
	int *ptr_1, *ptr_2;

	/* Initialize pointers */
	ptr_1 = &a;
	ptr_2 = &b;

	/* Print original values */
	printf("::::: Original Values :::::\n");
	printf("Value of a = %d\n", a);
	printf("Value of *ptr_1 = %d\n", *ptr_1);
	printf("Value of b = %d\n", b);
	printf("Value of *ptr_2 = %d\n", *ptr_2);

	/* Print memory addresses. (void *)arg casts the pointer */
	printf("\n::::: Memory Addresses :::::\n"); /* %p expects a void* arg */
	printf("Memory address of a = %p\n", (void *)&a);
	printf("Memory address ptr_1 points to = %p\n", (void *)ptr_1);
	printf("Memory address of b = %p\n", (void *)&b);
	printf("Memory address ptr_2 points to = %p\n", (void *)ptr_2);

	/* Dereferencing */
	*ptr_1 = 100;
	*ptr_2 = 200;

	/* Print new values */
	printf("\n::::: Values After Dereferencing :::::\n");
	printf("New value of a = %d\n", a);
	printf("New value of *ptr_1 = %d\n", *ptr_1);
	printf("New value of b = %d\n", b);
	printf("New value of ptr_2 = %d\n", *ptr_2);

	return (0);
}
