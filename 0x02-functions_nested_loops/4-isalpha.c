#include "main.h"
/**
  *_isalpha - checking for a letter
  *
  *@c: parameter to be assessed
  *
  *Return: 1 for lowercase and 0 if not
  *
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')|| (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	return (0);
}

