#include "main.h"
/**
  *get_bit - function to get bit at index
  *@n: number to get binary digit from
  *@index: position of binary
  *Return: the binary digit or -1
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int val;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	val = n >> 1;
	bit = val & 1;

	return (bit);
}
