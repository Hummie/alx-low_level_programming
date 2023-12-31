#include "main.h"
/**
  *binary_to_uint - function to print binary in base 10
  *@b: string
  *Return: value
  */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int value;

	value = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		value <<= 1;
		if (b[i] == '1')
			value++;
	}
	return (value);
}
