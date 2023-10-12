#include <stdio.h>

/**
 * modify_str - A function that modifies a string. It transforms lowercase
 *              chars to uppercase.
 * @str: The string passed as an argument in the program.
 */

/* Function Definition */
void modify_str(char str[])
{
	int i = 0;

	/* Iterate over each char of the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		else if (str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
		else
			str[i] = str[i];
	}
	printf("Modified String: %s\n", str);
}

/**
 * main - A program that passes a string as an argument in a function that
 *        modifies the string.
 * Return: 0 for success.
 */

int main(void)
{
	char str[30];

	/* Enter the string */
	printf("Enter the string: ");
	fgets(str, sizeof(str), stdin);
	printf("\nOriginal String: %s\n", str);

	/* Modify the string */
	modify_str(str);

	return (0);
}
