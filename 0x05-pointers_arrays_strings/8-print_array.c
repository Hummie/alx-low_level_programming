#include "main.h"
#include <stdio.h>

/**
 * print_array - main function
 * @a: pointer array
 * @n: number of times to print
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != n - 1)
			printf(", ");
	}
	printf("\n");
}
