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
	int i;

	if (min > max)
		return (NULL);

	arr_ran = malloc(sizeof(int) * (max - min + 1));

	if (arr_ran == NULL)
		return (NULL);

	for (i = 0; i < max - min; i++)
		arr_ran[i] = max - 1;

	return (arr_ran);
}
