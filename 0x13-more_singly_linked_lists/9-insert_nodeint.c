#include "lists.h"
#include <stdlib.h>
/**
  *insert_nodeint_at_index - function to add node
  *at specified index
  *@head: pointer to list
  *@idx: position to add
  *@n: value of member n
  *Return: newnode or NULL
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *newnode;

	unsigned int index;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	 for (index = 0; index < idx - 1 && temp != NULL; index++)
	{
		temp = temp->next;
	}
		newnode->next = temp->next;
		temp->next = newnode;

	return (newnode);
}
