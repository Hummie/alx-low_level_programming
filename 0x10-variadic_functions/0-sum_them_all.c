#include "variadic_functions.h"
#include <stdarg.h>
/**
  *sum_them_all - function to find sum of all its parameters
  *@n: parameter 1
  *
  *Return: 0 or sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}

	va_end(args);
	return (sum);
}
