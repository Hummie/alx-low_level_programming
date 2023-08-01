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
	listint_t *newnode = malloc(sizeof(listint_t));

	unsigned int index = 0;

	if (newnode == NULL)
		return (NULL);

	while (newnode != NULL && index < idx)
	{
		newnode->n = n;
		newnode->next = temp;
		index++;

		if (index > idx)
		{
			free(newnode);
			return (NULL);
		}
	}
	return (newnode);
}
