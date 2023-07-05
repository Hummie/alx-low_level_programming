#include "main.h"
/**
  *sqrt - function to find square root of a number
  *@a: variable to find square root
  *@b: iterates through a
  *Return: 1 or -1
  */
int sqrtact(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	return sqrtact(a, b + 1);
}

#include "main.h"
/**
  *_sqrt_recursion- function to find square root of a number
  *@n: find square root
  *Return: 1
  */
int _sqrt_recursion(int n)
{
	return (sqrtact(n, 1));
}
