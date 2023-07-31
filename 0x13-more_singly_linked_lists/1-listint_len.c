#include "lists.h"
/**
  *listint_len - function that returns the length of list
  *@h: pointer to first node of list
  *Return: Number of nodes aka elements
  */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes;

	num_nodes = 0;

	while (h != 0)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
