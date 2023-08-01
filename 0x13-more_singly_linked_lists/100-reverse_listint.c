#include "lists.h"
#include <stdlib.h>
/**
  *reverse_listint - function to reverse a list
  *@head: pointer to list
  *Return: 0
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode = NULL;
	listint_t *nextnode;
	listint_t *currnode = nextnode = *head;

	while (currnode != NULL)
	{
		nextnode = nextnode->next;
		currnode->next = prevnode;
		prevnode = currnode;
		currnode = nextnode;
	}
	*head = prevnode;
	return (0);
}
