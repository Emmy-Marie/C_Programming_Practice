#include <stdio.h>

/**
 * main - Guess the correct secret number to win the game.
 *        Number range is 1 to 20
 * Return: 0 if success and 1 if fail.
 */

int main()
{
	unsigned short int i;

	printf("========== Welcome ==========\n");
	printf("\n Guess my secret number and gain access\n");

	do
	{
		printf("\n++++++++++++++++++++++++\n");
		printf("Enter my secret number (hint : 1 to 20): ");
		scanf("%hu", &i);

		getchar();

	}while(i != 15);

	printf("Congrations! %hu is my secret number. You may now enter!\n", i);

	return (0);
}
