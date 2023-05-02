#include "lists.h"
/**
 * reverse_listint - reverses a linked list that was created
 * @head: pointer to the first node in the list you did already
 * Return: pointer to the first node
 * in the new list that will be created
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
