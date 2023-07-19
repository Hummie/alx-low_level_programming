#include <stdio.h>
#include "function_pointers.h"
/**
  *int_index - function to compare numbers
  *@array: array of integers
  *@size: size of array
  *@cmp: function to pointer
  *Return: index i or 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size - 1; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
