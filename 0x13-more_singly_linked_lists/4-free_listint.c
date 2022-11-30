#include "lists.h"

/**
* free_listint - free list
* @head: pointer to first element
*
* Return: void
*/

void free_listint(listint_t *head)
{
listint_t *storage;
while (head)
	{
	storage = head->next;
	free(head);
	head = storage;
	}
}
