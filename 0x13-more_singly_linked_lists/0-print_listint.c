#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numofnodes;

	numofnodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		numofnodes = numofnodes + 1;
		h = h->next;
	}
	return (numofnodes)
}
