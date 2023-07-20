#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
  *print_numbers - function to print numbers
  *@separator: string
  *@n: number of integers
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print_num;

	va_start(print_num, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(print_num, int);
			printf("%d", x);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print_num);
}
