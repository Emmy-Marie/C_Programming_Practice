#include <stdio.h>
#include <string.h>

/**
 * main - A program that compares two strings without using the strcmp()
 *        predefined function.
 * Return: 0 for success
 */

int main(void)
{
	char str_1[30], str_2[30];
	int i, outcome = 0;

	/* Enter Strings */
	printf("Enter String 1: ");
	fgets(str_1, sizeof(str_1), stdin);
	printf("Enter String 2: ");
	fgets(str_2, sizeof(str_2), stdin);

	/* Compare for empty strings */
	if (str_1[0] == '\0' && str_2[0] == '\0')
		outcome = 0;

	/* Compare non-empty strings */
	for (i = 0; str_1[i] != '\0' || str_2[i] != '\0'; i++)
	{
		if (str_1[i] == str_2[i])
			outcome = 0;
		else
		{
			outcome = 1;
			break;
		}
	}

	/* Print comparison outcome */
	if (outcome == 0)
		printf("Strings are same\n");
	else
		printf("Strings are not same\n");
	return (0);
}
