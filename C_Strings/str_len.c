#include <stdio.h>
#include <string.h>

/**
 * main - A program that finds the length of a string using strlen().
 * Return: 0 for success
 */

int main(void)
{
	char string[50];
	unsigned int count = 0;

	/* Enter the string */
	printf("Say a few words about tech: ");
	/* fgets() auto adds a newline char at the end of the input string */
	fgets(string, sizeof(string), stdin);

	/* Print string */
	printf("You said: %s\n", string);

	/* Find the string length */
	count = strlen(string) - 1; /* Remove newline char added by fgets */

	printf("The length of the string is: %d\n", count);
	return (0);
}
