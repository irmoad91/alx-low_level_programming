#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to the head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *c_node;

	if (head == NULL)
	{
		return;
	}
	else
	{
		while (*head)
		{
			c_node = *head;
			*head = (*head)->next;
			free(c_node);
		}
		head = NULL;
	}
}
