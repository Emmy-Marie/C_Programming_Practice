#include <stdio.h>

/**
 * main - A program that finds the length of a string without using the
 *        strlen() function.
 * Return: 0 for success
 */

int main(void)
{
	char string[50];
	unsigned int count, i;

	/* Enter string */
	printf("Tell me about yourself in one simple sentence: ");
	/* fgets() auto adds a newline char in the input string */
	fgets(string, sizeof(string), stdin);

	/* Print string */
	printf("You said: %s\n", string);

	/* Calculate string length and print */
	count = 0;
	i = 0;
	while (string[i] != '\0')
	{
		count++;
		i++;
	}
	/* Remove the newline char auto added by fgets() */
	count = count - 1;
	printf("The length of the string is: %d\n", count);
	return (0);
}
