#include <stdio.h>
#include "function_pointers.h"
/**
  *array_iterator - function that iterates through array
  *@array: array
  *@size: size of array
  *@action: pointer to function
  *Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
