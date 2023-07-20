#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  *print_strings - function to print strings
  *@separator: string
  *@n: number of strings
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print_str;
	char *s;

	va_start(print_str, n);

	for (i = 0; i < n; i++)
	{
		 s = va_arg(print_str, char *);
			if (s != NULL)
			{
				printf("%s", s);
			}
			else
			{
				printf("nil");
			}
			if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print_str);
}
