#include "main.h"
/**
  *factorial - function to find factorial of a number
  *@n: number to get factorial of
  *Return: -1 or 1
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if ( n == 0)
		return (1);
	return n * factorial(n - 1);
}
