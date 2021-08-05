#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index of a linked list
 * @head: double pointer
 * @index : index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/*Declaring list and variables*/
	listint_t *start = *head, *temp;
	unsigned int i = 0;

	/*If there's nothing in the head*/
	if (*head == NULL)
		return (-1);

	if (index == 0) /*if index is unique position*/
	{
		*head = start->next;
		free(start);
		return (1);
	}

	while (start != NULL && i < (index - 1))
	{
		start = start->next; /*linked list*/
		i++;
	}

	/*Check positions current and next*/
	if (start == NULL || start->next == NULL)
		return (-1);

	/*Delete node at position (next of index -1)*/
	temp = start->next;
	start->next = temp->next;

	free(temp);

	return (1);
}

