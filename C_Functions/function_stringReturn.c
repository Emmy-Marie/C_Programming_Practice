#include <stdio.h>

/**
 * display_str - Function Prototype.
 * Return: Function returns a string.
 */
char *display_str(void);

/**
 * main - A simple program that makes use of a function to return a string.
 * Return: 0 for success.
 */
int main(void)
{
	char *str;

	str = display_str();
	printf("The returned string: %s\n", str);

	return (0);
}

/**
 * display_str - A function that displays a returned string.
 * Return: Returns an inputed string.
 */
char *display_str(void)
{
	/* Static is used to make str-f accessible throughout the program */
	static char str_f[30];

	printf("Enter the string: ");
	fgets(str_f, sizeof(str_f), stdin);

	return (str_f);
}
