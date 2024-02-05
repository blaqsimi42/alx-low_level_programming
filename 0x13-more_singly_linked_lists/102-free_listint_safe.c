#include "lists.h"

/**
 * check_looped_listfree - check if there is loop in a linked list and
 * counts the number of looped linked list with unique nodes
 * @head: pointer to the head of the listint_t to check.
 *
 * Return: 0 - if list is not looped,
 *         Otherwise - the number of unique nodes in the list.
 */

size_t check_looped_listfree(listint_t *head)
{
	listint_t *mouse, *dog;
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
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to the address of listint_t list head.
 *
 * Return: size of the list freed.
 *
 * Description: function sets head to NULL.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = check_looped_listfree(*h);
	if (nodes == 0)
	{
		while (h != NULL && *h != NULL)
		{
			nodes++;
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}

	h = NULL;
	return (nodes);
}
