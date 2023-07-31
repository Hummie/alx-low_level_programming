#include "lists.h"
#include <stdlib.h>
/**
  *pop_listint - function to delete a node.
  *@head: pointer to node
  *Return: value of n
  */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int val = (*head)->n;

	if (*head == NULL)
		return (0);
	if (head != NULL)
	{
		*head = (*head)->next;
		free(temp);
	}
	return (val);
}
