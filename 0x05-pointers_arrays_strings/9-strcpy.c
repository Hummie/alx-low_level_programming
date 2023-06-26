#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - main function
 * @dest: destination to copy
 * @src: source to be copied from
 * Return: destination;
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; c <= _strlen(src); c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
