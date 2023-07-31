#include "lists.h"

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
