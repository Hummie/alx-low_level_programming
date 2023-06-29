#include "main.h"
/**
  *_strcmp - function to compare
  *@s1: function to be compared
  *@s2: function to be compared to
  *Return: 0
  */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	for (; s1[i] != '\0' && s2[i] != '\0';)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
