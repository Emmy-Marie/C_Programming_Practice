#include <stdio.h>

/**
 * main - A simple program showing the workings of void pointers
 * Return: 0 for success
 */

int main(void)
{
	int a = 10;
	float b = 10.10;
	char c = 'A';

	/* Void Pointer declaration */
	void *ptr;

	/* Initialize void pointer and print values via type casting */
	ptr = &a;
	printf("*ptr = %d\n", *(int *)ptr);
	ptr = &b;
	printf("*ptr = %f\n", *(float *)ptr);
	ptr = &c;
	printf("*ptr = %c\n", *(char *)ptr);

	return (0);
}
