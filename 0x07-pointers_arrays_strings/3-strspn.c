#include "main.h"
/**
  *_strspn - finction to return a prefix substring
  *@s: string
  *@accept: prefixed substring
  *Return: n prefixed substring
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (0);
}
