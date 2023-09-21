#include <stdio.h>

/**
 * main - A program that shows the workings of pointer increment and decrement.
 * Return: 0 for success
 */

int main(void)
{
	int a[] = {10, 20, 30, 40, 50}, i;
	int *ptr_1 = a, *ptr_2 = &a[4];

	/* Print array and initial value of ptr */
	printf("::::: Array :::::\n");
	printf("a[] = {");
	for (i = 0; i < 5; i++)
	{
		if (i != 4)
			printf("%d, ", a[i]);
		else
			printf("%d}\n", a[i]);
	}
	printf("\n::::: Initial values of ptr_1 and ptr_2 :::::\n");
	printf(" *ptr_1 = %d\n *ptr_2 = %d\n", *ptr_1, *ptr_2);

	/* Pointer Increment and Decrement */
	ptr_1++;
	ptr_2--;
	printf("\n::::: New values after Increment/Decrement :::::\n");
	printf(" *ptr_1 = %d\n *ptr_2 = %d\n", *ptr_1, *ptr_2);

	return (0);
}
