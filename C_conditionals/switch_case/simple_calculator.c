#include <stdio.h>
#include <stdbool.h>

/**
 * Main - A program that performs simple calculation on two integers
 * Return: 0 if success and 1 if fail
 */


int main()
{
	int a, b, result;
	char ch;

	printf("Enter operator: ");
	scanf("%c", &ch);

	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	if(a == false || b == false)
	{
		printf("Invalid number entered\n");
		return (1);
	}

	switch(ch)
	{
	case '+':
		result = a + b;
		printf("%d plus %d = %d\n", a, b, result);
		break;

	case '-':
		result = a - b;
		printf("%d minus %d = %d\n", a, b, result);
		break;

	case '*':
		result = a * b;
		printf("%d multiply %d = %d\n", a, b, result);
		break;

	case '/':
		result = a / b;
		printf("%d divided %d = %d\n", a, b, result);
		break;

	case '%':
		result = a % b;
		printf("%d modulo %d = %d\n", a, b, result);
		break;

	default:
		printf("Incorrect operator entered\n");
	}
	return (0);
}
