#include "lists.h"
#include <stdlib.h>
/**
  *sum_listint - function to add all data of n
  *@head: pointer to first node
  *Return: sum or 0
  */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

