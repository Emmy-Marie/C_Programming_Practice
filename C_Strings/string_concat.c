#include <stdio.h>
#include <string.h>

/**
 * main - A program that concatenates two strings without using the
 *        strcat() function.
 * Return: 0 for success
 */

int main(void)
{
	char str_1[40] = "Knock Knock!!";
	char str_2[] = " Great, dad jokes again!";
	int len_1, len_2, i;

	/* Print both strings */
	printf("String 1: %s\n", str_1);
	printf("String 2: %s\n", str_2);

	/* Calculate string lengths */
	len_1 = strlen(str_1);
	len_2 = strlen(str_2);

	/* Concatenate strings and print */
	for (i = 0; i <= len_2; i++)
		str_1[len_1 + i] = str_2[i];
	printf("Concatenated String is: %s\n", str_1);
	return (0);
}
