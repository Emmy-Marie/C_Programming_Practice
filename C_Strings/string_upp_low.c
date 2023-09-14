#include <stdio.h>
#include <string.h>

/**
 * main - A program that converts strings in uppercase to lowercase
 * Return: 0 for success
 */

int main(void)
{
	char str[30];
	int i, length;

	/* Enter the string */
	printf("Enter the string in uppercase: ");
	fgets(str, sizeof(str), stdin);
	printf("\nOriginal String in Uppercase is: %s\n", str);

	/* Calculate string length */
	length = strlen(str);

	/* Convert string to lowercase */
	for (i = 0; i < length; i++)
	{
		if (str[i] == '\n') /* newline char check due to fgets() */
			str[i] = '\0';
		str[i] = str[i] + 32;
	}

	/* Print modified string */
	printf("String in lowercase is: %s\n", str);
	return (0);
}
