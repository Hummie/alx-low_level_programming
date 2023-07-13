#include "main.h"
#include <stdlib.h>
/**
  *array_range - function to create an array of integers
  *@min: least value
  *@max: maximum value
  *Return: pointer
  */
int *array_range(int min, int max)
{
	int *arr_ran;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	arr_ran = (int *)malloc(len * sizeof(int));

	if (arr_ran == NULL)
		return (NULL);

	for (i = min; i < len; i++)
		arr_ran[i] = min + i;

	return (arr_ran);
}
