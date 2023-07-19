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
	int i, j;

	if (size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (cmp(array[i]) == array[j])
			{
				return (i);
			}
		}
	}
	return (0);
}
