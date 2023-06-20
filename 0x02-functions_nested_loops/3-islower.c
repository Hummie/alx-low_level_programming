#include "main.h"
/**
  *_islower - checking for a lowercase letter
  *
  *@c: is checking for lowercase
  *
  *Return: 1 for lowercase and 0 if not
  *
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}

