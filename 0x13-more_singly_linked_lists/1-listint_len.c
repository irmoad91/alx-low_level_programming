#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 * @h: pointer to listint
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t numofelem;

	numofelem = 0;
	while (h != NULL)
	{
		numofelem = numofelem + 1;
		h = h->next;
	}
	return (numofelem);
}
