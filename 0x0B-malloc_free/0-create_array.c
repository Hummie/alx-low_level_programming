#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  *create_array - creates an array of chars.
  *@size: size of array
  *@c: char to initialize
  *Return: NULL if fail, pointer to array
  */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
