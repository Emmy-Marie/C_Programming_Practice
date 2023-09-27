#include <stdio.h>

/**
 * main - A program that shows the workings of function call by value and
 *        function call by reference.
 * @a: First parameter.
 * @b: Second parameter.
 * Return: 0 for success
 **/

/* Funtion Prototypes/Declaration */
void modify_by_value(int a, int b);
void modify_by_reference(int *a, int *b);

int main(void)
{
	int a  = 10, b = 20;

	printf("Before call by value: a = %d & b = %d\n", a, b);
	modify_by_value(a, b);
	printf("After call by value: a = %d & b = %d\n", a, b);
	modify_by_reference(&a, &b);
	printf("After call by reference: a = %d & b = %d\n", a, b);
	return (0);
}

/**
 * modify_by_value - A function call by value. Changes made to the parameter
 *                   inside this function will not affect the original variable
 *                   outside the function.
 * @a: First argument of the function.
 * @b: Second argument of the function.
 */

void modify_by_value(int a, int b)
{
	a = a * 2;
	b = b * 2;
	printf("During call by value: a = %d & b = %d\n", a, b);
}

/**
 * modify_by_reference - A function call by reference. We pass the memory
 *                       address of the original variable, allowing the
 *                       function to directly access and modify the value.
 * @a: A pointer to first int variable.
 * @b: A pointer to second int variable.
 */

void modify_by_reference(int *a, int *b)
{
	*a = *a * 2;
	*b = *b * 2;
	printf("During call by reference: a = %d & b = %d\n", *a, *b);
}
