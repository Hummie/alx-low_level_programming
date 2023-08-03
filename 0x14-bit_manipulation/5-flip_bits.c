#include "main.h"
/**
  *flip_bits - function to flip bits
  *@n: integer
  *@m: bits to be flipped into
  *Return: bits flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m, a = 0;

	while (xor > 0)
	{
		a += (xor & 1);
		xor >>= 1;
	}
	return (a);
}
