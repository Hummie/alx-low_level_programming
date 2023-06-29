#include "main.h"
#include <string.h>
/**
  **_strcat - function that concantenates
  *@dest: parameter to be appended
  *@src: parameter to be concantenated
  *Return: dest
  */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}
	for (j = 0; src[j] != '\0';)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
