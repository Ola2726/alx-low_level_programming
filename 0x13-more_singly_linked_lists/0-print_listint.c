#include "lists.h"

/**
 * print_listint  all the elements of a linked list
 *  linked list of type 
 *
 * Return: number of 0
 * */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

