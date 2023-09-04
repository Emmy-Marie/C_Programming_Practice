#include <stdio.h>
#include <conio.h>

/**
 * getche - A function reads a single char from the keyboard and displays it on
 *          the console screen without waiting for the enter key.
 */

int main()
{
        char ch;

        ch = getche();

        printf("\nThe character entered is %c\n", ch);

        return (0);
}
