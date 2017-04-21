#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - return the sum of all the data (n) of a linked list.
 * @head: head node of type struct listint_t.
 *
 * Return: sum of all data in linked list listint_t, 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	sum = 0;

  if (!head)
  {
		return (0);
  }

  temp = head;

  while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
