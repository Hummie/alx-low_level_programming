#include "main.h"
/**
  *_memcpy - function to copy memory area
  *@dest: memeory area to be copied into
  *@src: memory area to be copied from
  *@n: fixed bytes
  *Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0 ; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
