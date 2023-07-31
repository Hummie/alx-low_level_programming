#include "lists.h"
#include <stdlib.h>
/**
  *get_nodeint_at_index - function to get node at specified index
  *@head: pointer to node
  *@index: position of node in list
  *Return: address of node or null
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	while (temp != NULL && index > 0)
	{
		temp = temp->next;
		index--;
	}

	if (temp == NULL)
	{
		return (NULL);
	}
	else
	{
		return (temp);
	}
}
