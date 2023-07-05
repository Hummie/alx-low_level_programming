#include "main.h"
/**
  *primenum - function to find primenumber
  *@a: parameter to find prime number
  *@b: parameter to iterate from 1 to n
  *Return: 1 or 0
  */
int primenum(int a, int b)
{
	if (a == b)
		return (1);
	if (a % b == 0)
		return (0);
	return (primenum(a, b + 1));
}

/**
  *is_prime_number - function to find prime
  *@n: parameter to find if prime
  *Return: n
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primenum(n, 2));
}
