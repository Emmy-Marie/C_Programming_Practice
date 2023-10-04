#include <stdio.h>


/* Function Definition */
/**
 * average - A function that calculates the average mark of the students in a
 *           class and also prints out the total score and number of students.
 * @a: An array representing the marks of students.
 * @length_f: Length/size of the array.
 * Return: avr_f is the average of the marks within the function.
 */

float average(float a[], int length_f)
{
	int i;
	float avr_f = 0, total_marks = 0;

	for (i = 0; i < length_f; i++)
		total_marks = total_marks + a[i];

	avr_f = total_marks / length_f;

	printf("Total marks of all students = %f\n", total_marks);
	printf("Total number of students = %d\n", length_f);
	return (avr_f);
}

/**
 * main - A program that passes an array as an argument in a function to
 *        calculate the average mark of the students in a class.
 * Return: 0 for success.
 */

/* Main Function */
int main(void)
{
	float marks[] = {60, 30.5, 44, 98, 20, 40, 19, 57, 70, 100};
	float avr = 0;

	avr = average(marks, 10);
	printf("The average mark = %.2f\n", avr);
	return (0);
}
