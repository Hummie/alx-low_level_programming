#include "main.h"
#include <stdlib.h>
/**
  *_calloc - function allocates memory to nmemb of elements of size bytes
  *@nmemb: elements of array
  *@size: size of elements
  *Return: pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *calc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	calc = (void *)malloc(nmemb * size);

	if (calc == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		((char *)calc)[i] = 0;

	return (calc);
}
