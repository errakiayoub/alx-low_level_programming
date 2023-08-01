#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first node in the linked list
 * Return: the data inside the node that was deleted or 0
 * if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	current_node = (*head)->next;
	free(*head);
	*head = current_node;
	return (number);
}
