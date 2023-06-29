#include "main.h"
/**
  *cap_string - function to capitalize
  *@str: string to be changed
  *Return: string
  */
char *cap_string(char *str)
{
	int capz = 0;

	while (str[capz])
	{
		while (!(str[capz] >= 'a' && str[capz] <= 'z'))

			capz++;

		if (str[capz - 1] == ' ' ||
		str[capz - 1] == '\t' ||
		str[capz - 1] == '\n' ||
		str[capz - 1] == ',' ||
		str[capz - 1] == ';' ||
		str[capz - 1] == '.' ||
		str[capz - 1] == '!' ||
		str[capz - 1] == '?' ||
		str[capz - 1] == '"' ||
		str[capz - 1] == '(' ||
		str[capz - 1] == ')' ||
		str[capz - 1] == '{' ||
		str[capz - 1] == '}' ||
		capz == 0)
			str[capz] -= 32;
		capz++;
	}
	return (str);
}


