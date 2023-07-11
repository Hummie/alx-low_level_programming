#include "main.h"
#include <stdlib.h>
/**
  *str_concat - function to concantenate two strings
  *@s1: pointer to string 1
  *@s2: pointer to string 2
  *Return: NULL or pointer to new memory
  */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	conc = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!conc)
	{
		return (NULL);
	}
	if (s1)
	{
		for (len1 = 0; s1[len1]; len1++)
			conc[len1] = s1[len1];
	}
	if (s2)
	{
		for (len2 = 0; s2[len2]; len2++, len1++)
			conc[len1 + len2] = s2[len2];
	}
	conc[len1 + len2] = '\0';
	return (conc);
}

