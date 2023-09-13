#include <stdio.h>
#include <string.h>

/**
 * main - A program that concatenates two strings using the pre-defined
 *        strcat() function.
 * Return: 0 for success
 */

int main(void)
{
	char str_1[40] = "Houston!";
	char str_2[] = " We have a problem!";

	/* Print Strings */
	printf("String 1: %s\n", str_1);
	printf("String 2: %s\n", str_2);

	/* Concatenate strings and print */
	strcat(str_1, str_2);

	printf("The concatenated string: %s\n", str_1);
	return (0);
}
