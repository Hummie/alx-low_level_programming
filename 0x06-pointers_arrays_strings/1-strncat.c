#include "main.h"
/**
  *_strncat - function used to concantenate
  *@dest: Parameter to be appended
  *@src: parameter to concantenate
  *@n: number of bytes from src
  *Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i]  = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
