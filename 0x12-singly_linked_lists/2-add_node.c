#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: the head of link list
 * @str: string to add in the list
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_mode;
	unsigned int n;

	n = 0;
	n_mode = malloc(sizeof(list_t));
	if (!n_mode)
	{
		return (NULL);
	}
	n_mode->str = strdup(str);
	while (str[n])
	{
		n++;
	}
	n_mode->len = n;
	n_mode->next = *head;
	*head = n_mode;

	return (*head);
}
