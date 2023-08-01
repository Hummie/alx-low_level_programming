#include "lists.h"
#include <stdlib.h>
/**
  *delete_nodeint_at_index - function to delete node
  *at specified index
  *@head: pointer to list
  *@index: position of node
  *Return: 1 or -1
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *next;
	unsigned int i = 0;

	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && i < index - 1)
	{
		temp = temp->next;
		i++;

		if (temp == NULL)
		{
			return (-1);
		}
	}
	next = temp->next;
	temp->next = next->next;
	free(next);
	return (1);
}
