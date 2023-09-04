#include <stdio.h>

/**
 * main - A program that calculates the sum and average 
 *        of the scores of 5 students.
 */

int main()
{
	int score[5], sum, i, j;
	float avg;

	/* Enter the scores of the students */
	for(i = 0, j = 1; i < 5; i++, j++)
	{
		printf("Score of student [%d] = ", j);
		scanf("%d", &score[i]);
	}

	/* Print student scores and calculate sum of scores */
	sum = 0;
	for(i = 0, j = 1; i < 5; i++, j++)
	{
		printf("Student [%d] scored: %d\n", j, score[i]);
		sum = sum + score[i];
	}

	/* Calculate average. Print sum and average */
	avg = sum / 5;
	printf("Sum of scores = %d\n", sum);
	printf("Average of total scores = %f\n", avg);

	return (0);
}
