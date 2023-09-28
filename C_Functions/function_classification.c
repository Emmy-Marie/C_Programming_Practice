#include <stdio.h>

/**
 * main - A program that performs some basic mathematical operations using
 *        the 4 classification of functions.
 * Return: 0 for success.
 */

/* Function declarations */
void add(void);
int subtract(void);
void multiply(int, int);
int divide(int, int);

int main(void)
{
	int difference = 0, division = 0;

	/* No Argument & without Return Type Function */
	add();

	/* No Argument & with Return Type Function */
	difference = subtract();
	printf("Difference: 10 - 20 = %d\n", difference);

	/* With Argument & without Return Type Function */
	multiply(10, 20);

	/* With Argument & with Return Type Function */
	division = divide(10, 20);
	printf("Division: 20 / 10 = %d\n", division);

	return (0);
}

/* Function definitions */

/**
 * add - A function that adds two numbers and prints the result. This is a
 *       function without return type and without argument.
 */
void add(void)
{
	int a = 10, b = 20, sum = 0;

	sum = a + b;
	printf("Sum: %d + %d = %d\n", a, b, sum);
}

/**
 * subtract - A function that calculates the difference between two numbers and
 *            returns the result. This is a function without argument and with
 *            return type.
 * Return: The difference between the two numbers (diff).
 */
int subtract(void)
{
	int a = 10, b = 20, diff = 0;

	diff = a - b;
	return (diff);
}

/**
 * multiply - A function that multiplies two numbers and prints the result.
 *            This is a function with arguments and without return type.
 * @a: Multiplier
 * @b: Multiplicand
 */
void multiply(int a, int b)
{
	int mul = 0;

	mul = a * b;
	printf("Multiplication: %d * %d = %d\n", a, b, mul);
}

/**
 * divide - A function that calculates the division of two numbers and prints
 *          the result.
 * @a: Dividend
 * @b: Divisor
 * Return: The result of the division (div).
 */
int divide(int a, int b)
{
	int div = 0;

	div = b / a;
	return (div);
}
