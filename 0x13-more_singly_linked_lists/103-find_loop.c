#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pointer1 = head;
	listint_t *pointer2 = head;

	if (!head)
		return (NULL);

	while (pointer1 && pointer2 && pointer2->next)
	{
		pointer2 = pointer2->next->next;
		pointer1 = pointer1->next;
		if (pointer2 == pointer1)
		{
			pointer1 = head;
			while (pointer1 != pointer2)
			{
				pointer1 = pointer1->next;
				pointer2 = pointer2->next;
			}
			return (pointer2);
		}
	}
	return (NULL);
}
