#include "main.h"
#include <stdlib.h>
/**
  *string_nconcat - function to concantenate string
  *@s1: string to be concantenated
  *@s2: string to be concantenated
  *@n: uknown size of string 2
  *Return: pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j;
	char *ncon;
	int i, ncon_str = 0, len = 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i  = 0, j = 0; s1[i] != '\0' || s2[j] != '\0'; i++, j++)
		len++;

	ncon = malloc(sizeof(char) * (len + 1));

	if (ncon == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ncon[ncon_str++] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; j++)
		ncon[ncon_str++] = s2[j];

	ncon[ncon_str] = '\0';

	return (ncon);
}
