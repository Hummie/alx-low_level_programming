#include "lists.h"
#include <stdlib.h>
/**
  *free_listint2 - function to free memory
  *@head: pointer to node
  */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *nxt;

	if (*head == NULL)
		return;

	while (temp != NULL)
	{
		nxt = temp->next;
		free(temp);
		temp = nxt;
	}
	*head = NULL;
}
