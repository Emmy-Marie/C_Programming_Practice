#include <stdio.h>

/**
 * gets - A function that reads a string
 */

int main()
{
	char ch[20];

	printf("Enter your string: ");

	gets(ch);

	printf("You entered: %s\n", ch);

	return (0);

}
