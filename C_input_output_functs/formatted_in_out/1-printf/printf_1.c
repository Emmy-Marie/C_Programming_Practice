#include <stdio.h>

int main()
{
	int a, b, sum;

	printf("Enter two numbers to add: ");
	scanf("%d %d", &a, &b);

	sum = a + b;

	printf("Sum is equal to %d\n", sum);

	return (0);
}
