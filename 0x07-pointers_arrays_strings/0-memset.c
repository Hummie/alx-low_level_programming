#include "main.h"
/**
  *_memset - function that fills bytes in memory with value
  *@s: pointer to a variable
  *@b: constant byte value
  *@n: number of bytes to be filled with b
  *Return: s
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
