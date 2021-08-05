#include "lists.h"

/**
 *  add_dnodeint_end - new node at the beginning of a dlistint_t list.
 * @head: head
 * @n : new data
 * Return: the number of elements in a linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_data, *last_node = *head;

	new_data = malloc(sizeof(dlistint_t));

	/*Handle error allocated memory*/
	if (new_data == NULL)
		return (NULL);

	/*Assing data*/
	new_data->n = n;

	if (*head == NULL)
	{
		*head = new_data;
		return (new_data);
	}
	/*advance position*/
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	/*Last position*/
	last_node->next = new_data;

	/*Doubly linked list*/
	new_data->next = NULL;
	new_data->prev = last_node;

	return (new_data);
}
