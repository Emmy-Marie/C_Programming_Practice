#include <stdio.h>
#include <string.h>

/**
 * main - A program that compares two strings using the
 *        pre-defined strcmp() function.
 * Return: 0 for success
 */

int main(void)
{
	char str_1[30], str_2[30];
	int outcome = 0;

	/* Enter Strings */
	printf("Enter String 1: ");
	fgets(str_1, sizeof(str_1), stdin);
	printf("Enter String 2: ");
	fgets(str_2, sizeof(str_2), stdin);

	/* Compare strings */
	outcome = strcmp(str_1, str_2);
	if (outcome != 0)
		printf("Strings are not the same\n");
	else
		printf("Strings are same\n");

	return (0);
}
