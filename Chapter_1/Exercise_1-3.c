#include <stdio.h> /*Include standard input output library*/

/**
 * main - the main function converts temperature from F to C
 * Return: return 0 if successful and 1 if not
 */
int main(void)
{
/*Declare and initialise upper, lower, step, fahr, and celsius variables*/
	int upper, lower, step;
	float fahr, celsius;

	upper = 300;
	lower = 0;
	step = 20;
	fahr = lower;
/*Title for the table*/
	printf("TEMPERATURE CONVERTER F TO C\n");
/*Conversion Calculation*/
	while (fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%4.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return (0);
}
