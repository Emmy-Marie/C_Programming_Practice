#include <stdio.h>

/**
 * getchar - An unformatted input function that reads a single character
 */

int main()
{
	char ch;

	printf("Enter a character: ");
	ch = getchar();

	printf("The entered character is %c\n", ch);
	printf("The ASCII value of %c is %d\n", ch, ch);
	return (0);
}
