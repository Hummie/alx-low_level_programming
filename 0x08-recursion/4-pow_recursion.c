#include "main.h"
/**
  *_pow_recursion - function to find power
  *@x: parameter 1
  *@y: paramaeter 2
  *Return: -1, 1, power
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
