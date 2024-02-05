#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* sum_listint - searches for the the sum of all data in a linked list.
* @head: linked list to print
*
* Return: nth node, NULL otherwise.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
return (sum);
}
