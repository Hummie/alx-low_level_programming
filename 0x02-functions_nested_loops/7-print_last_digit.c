#include "main.h"
/**
  *print_last_digit - print last digit of a number
  *@a: number to be computed
  *Return: last digit of number
  */

int print_last_digit(int a)
{
	int last;

	last = a % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
