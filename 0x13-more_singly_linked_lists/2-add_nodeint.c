#include "lists.h"
/**
  * add_nodeint - adds a new node at the beginning
  * @head: a pointer to the address of the
  * head of the listint_t list
  * @n: input
  * Return: if the function fails - NULL
  * otherwise - the address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
