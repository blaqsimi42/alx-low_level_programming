#include "lists.h"
#include <stdio.h>
#include "lists.h"

/**
 * check_looped_listint - checks if there is any loop in a linked list and
 * counts the number looped linked lists that are unique
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: 0 - if list not looped,
 *         Otherwise - the number of unique nodes in the list.
 */

size_t check_looped_listint(const listint_t *head)
{
	const listint_t *mouse, *dog;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	mouse = head->next;
	dog = (head->next)->next;

	while (dog) /* check if there is loop in the list */
	{
		if (mouse == dog)
			break;
		mouse = mouse->next;
		dog = (dog->next)->next;
	}

	if (mouse == dog) /* count unique node in a looped list */
	{
		mouse = head;
		while (mouse != dog)
		{
			nodes++;
			mouse = mouse->next;
			dog = dog->next;
		}
		mouse = mouse->next;
		while (mouse != dog)
		{
			nodes++;
			mouse = mouse->next;
		}
		return (nodes);
	}

return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = check_looped_listint(head);

	if (nodes == 0)
	{
		while (head != NULL)
		{
			nodes++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
