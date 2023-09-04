#include <stdio.h>
#include <conio.h>

/**
 * getch - A function holds the output screen until a key is pressed to
 *         exit the console screen. It reads a single character. It only
 *         shows up on the console if printed.
 */

int main()
{
	char ch;

	ch = getch();

	printf("The character entered is %c\n", ch);

	return (0);
}
