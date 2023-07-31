#include "lists.h"
#include <stdlib.h>
/**
  *free_listint - function to free list from memory
  *@head: pointer to first element
  */
void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *nxt;

	while (temp != NULL)
	{
		nxt = temp->next;
		free(temp);
		temp = nxt;
	}
}
