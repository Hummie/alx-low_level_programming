#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - starting function
 *
 *DESCRIPTION: if,else and else if function running
 *
 *Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
		(n < 0);
	{
		printf("is negative");
	}
	/* your code goes there */
	return (0);
}
