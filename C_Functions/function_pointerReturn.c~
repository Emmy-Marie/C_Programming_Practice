#include <stdio.h>

/**
 * return_pointer - Function Prototype.
 * @int: The integer array passed as an argument to the function.
 * Return: Function returns a pointer
 */
int *return_pointer(int[]);

/**
 * main - A program that returns a pointer from a function
 * Return: 0 for success.
 */
int main(void)
{
	int a[] = {10, 20, 30, 40, 50};
	int *p;

	p = return_pointer(a);
	printf("*p = %d\n", *p);
	return (0);
}

/**
 * return_pointer - A function that performs an operation on an array and
 *                  and returns a pointer.
 * @a: An array as an argument.
 * Return: A pointer.
 */
int *return_pointer(int a[])
{
	a = a + 3;
	return (a);
}
