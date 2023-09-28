#include <stdio.h>

/**
 * main - A program that performs some basic mathematical operations using
 *        functions without arguments and without return type.
 * Return: 0 for success.
 */

/* Function declarations */
void add(void);
void subtract(void);
void multiply(void);
void divide(void);

int main(void)
{
	add();
	subtract();
	multiply();
	divide();
	return (0);
}

/* Function definitions */

/**
 * add - A function that adds two numbers and prints the result.
 */
void add(void)
{
	int a = 10, b = 20, sum = 0;

	sum = a + b;
	printf("Sum: %d + %d = %d\n", a, b, sum);
}

/**
 * subtract - A function that calculates the difference between two numbers and
 *            prints the result.
 */
void subtract(void)
{
	int a = 10, b = 20, diff = 0;

	diff = a - b;
	printf("Difference: %d - %d = %d\n", a, b, diff);
}

/**
 * multiply - A function that multiplies two numbers and prints the result.
 */
void multiply(void)
{
	int a = 10, b = 20, mul = 0;

	mul = a * b;
	printf("Multiplication: %d * %d = %d\n", a, b, mul);
}

/**
 * divide - A function that calculates the division of two numbers and prints
 *          the result.
 */
void divide(void)
{
	int a = 10, b = 20, div = 0;

	div = b / a;
	printf("Division: %d / %d = %d\n", b, a, div);
}
