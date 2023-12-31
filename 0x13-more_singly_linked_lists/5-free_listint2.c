#include "lists.h"
#include <stdlib.h>
/**
  *free_listint2 - function to free memory
  *@head: pointer to node
  */
void free_listint2(listint_t **head)
{
	listint_t *nxt;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		nxt = *head;
		*head = (*head)->next;
		free(nxt);
	}
	head = NULL;
}
