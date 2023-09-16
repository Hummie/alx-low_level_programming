#include "lists.h"

/**
  * listint_len - prints the number of elements in a list
  * @h: head pointer
  *
  * Return: number of elements
  **/

unsigned int listint_len(const dlistint_t *h)
{
	unsigned int count = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *tail = NULL;
	unsigned int i, list_len = listint_len(*head);

	if (head == NULL || *head == NULL)
		return (-1);
	if (index < list_len)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
	}
	else if (index == list_len - 1)
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		if (temp->next == tail)
			temp->prev->next = tail;
		free(temp);
	}
	else
	{
		temp = *head;
		for (i = 0; i < index; i++)
		{
			temp = temp->next;
			temp->next->prev = temp->next;
			temp->prev->next = temp->prev;
			free(temp);
		}
	}
	return (1);
}
			
	
