#include "main.h"
#include <stdlib.h>
/**
  *malloc_checked - function to allocate memory
  *@b: size of variabe
  *Return: pointer
  */

void *malloc_checked(unsigned int b)
{
	void *malch;

	malch = malloc(b);
	if (malch == NULL)
	{
		exit(98);
	}
	return (malch);
}
