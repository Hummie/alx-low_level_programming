#include "main.h"
/**
  *leet - encoding a string
  *@s: parameter pointer
  *Return: s
  */
char *leet(char *s)
{
	char letArr[] = "a4A4e3E3o0O0t7T7l1L1";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letArr[j] != '\0'; j++)
		{
			if (s[i] == letArr[j])
			{
				s[i] = letArr[j + 1];
				break;
			}
		}
	}
	return (s);
}
