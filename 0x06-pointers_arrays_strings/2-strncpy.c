#include "main.h"
/**
  *_strncpy - function to copy string
  *@dest: parameter to be copied into
  *@src: parameter to be copied
  *@n: number of elements to be copied
  *Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
