#include <stdio.h>
#include <string.h>

/**
 * main - A program that reverses a string.
 * Return: 0 for success
 */

int main(void)
{
	char str[30], rev[30];
	int i, j, length;

	/* Enter the string */
	printf("Enter the string: ");
	fgets(str, sizeof(str), stdin);
	printf("\nOriginal String: %s\n", str);

	/* Calculate string length */
	length = strlen(str);

	/* Reverse the string */
	for (i = length, j = 0; i > 0; i--, j++)
		rev[j] = str[i - 1];

	/* Print string */
	printf("Reversed String: %s\n", rev);
	return (0);
}
