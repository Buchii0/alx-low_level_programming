#include "lists.h"

/**
 * add_nodeint - add new node a beginning of a a list
 * @head: pointer
 *@n:number
 * Return:  number elements of linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	/*Using malloc*/
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /*Assing data*/
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
