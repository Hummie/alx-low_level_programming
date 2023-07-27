#include "lists.h"
#include <stdlib.h>
/**
  *list_len - function to return number of elements in a list
  *@h: pointer to struct list
  *
  *Return: Number of elements
  */
size_t list_len(const list_t *h)
{
	int num_elem;

	num_elem = 0;

	while (h != NULL)
	{
		h = h->next;
		num_elem++;
	}
	return (num_elem);
}
