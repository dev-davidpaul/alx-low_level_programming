#include "lists.h"
/**
  * print_listint - prints all the elements of a listsint_t list
  * @h: a pointer to the head of the listint_t list
  * Return: the number of pointer in the listint_t list
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d/n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
