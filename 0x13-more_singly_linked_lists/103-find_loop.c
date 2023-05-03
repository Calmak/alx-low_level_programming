#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts, NULL if fail
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *up = head;
	listint_t *down = head;

	if (!head)
		return (NULL);

	while (up && down && down->next)
	{
		down = down->next->next;
		up = up->next;
		if (down == up)
		{
			up = head;
			while (up != down)
			{
				up = up->next;
				down = down->next;
			}
			return (down);
		}
	}
	return (NULL);
}
