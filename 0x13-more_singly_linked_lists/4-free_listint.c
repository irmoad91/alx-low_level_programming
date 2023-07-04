#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: head of the link list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *c_node;

	while (head != NULL)
	{
		c_node = head;
		head = head->next;
		free(c_node);
	}
}
