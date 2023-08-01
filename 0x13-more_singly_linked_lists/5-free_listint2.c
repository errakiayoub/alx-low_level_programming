#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be free
 */
void free_listint2(listint_t **head) 
{
    if (head == NULL || *head == NULL)
        return;

    listint_t *current_node;
    listint_t *next_node;

    current_node = *head;
    while (current_node != NULL) {
        next_node = current_node->next;
        free(current_node);
        current_node = next_node;
    }

    *head = NULL;
}
