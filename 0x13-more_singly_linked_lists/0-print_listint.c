#include "lists.h"
#include <stdio.h>
/**
  *print_listint - function to print the elements of a struct variable
  *@h: pointer to first node of list.
  *Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes;

	num_nodes = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
