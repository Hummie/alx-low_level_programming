#include "main.h"
/**
  *_strpbrk - function to search a string
  *@s: string to be searched
  *@accept: nytes to be searched for
  *Return: 0
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[i])
		{
		return (s);
		}
	s++;
	}
	}
	return (0);
}
