#include "main.h"
/**
  *clear_bit - function to set value at index to 0
  *@n: string with bits
  *@index: position of bit in string
  *Return: 1 or -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	mask = ~mask;
	*n &= mask;

	return (1);
}

