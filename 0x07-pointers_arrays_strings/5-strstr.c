#include "main.h"
/**
  *_strstr - locating a substring function
  *@haystack: paramaeter to find substring in
  *@needle: substring
  *Return: 0
  */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (*needle == haystack[i])
		{
		return (needle);
		}
	}
	return (0);
}
