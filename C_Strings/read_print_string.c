#include <stdio.h>
#include <string.h>

/**
 * main - A program that reads and prints a string.
 * Return: 0 for success
 */

int main(void)
{
	char name[30];

	/* Read in the string */
	printf("Enter your full name: ");
	gets(name);

	/* Print the string */
	printf("Your full name is %s\n", name);

	return (0);
}
