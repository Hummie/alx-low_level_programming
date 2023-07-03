#include "main.h"
/**
  *_strchr - function locating a character in string
  *@s: pointer to string
  *@c: character tob= be checked
  *Return: c if found, 0 if not found
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
		return (&s[i]);
		}
	}
	return (0);
}
