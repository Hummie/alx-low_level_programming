#include "main.h"
#include <stdlib.h>
/**
  *_stdup - function to return pointer to new memory
  *@str: string to copy
  *Return: NULL, pointer to memory
  */
char *_strdup(char *str)
{
	char *dup;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
	return (NULL);

	for (j = 0; str[j]; j++)
		dup[j] = str[j];
	return (dup);
}
