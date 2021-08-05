#include "lists.h"

/**
 *_strlen - length of a string
 *@s: A pointer to an int that will be updated
 *
 *Return: void
 */

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0') /*Count character of string*/
	{
		i++;
	}

	return (i);
}

/**
 * add_node_end -  adds a new node at the end of a list
 * @head: pointer
 *@str:string
 * Return:  address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node = *head;
	/*Using malloc*/
	new_node = malloc(sizeof(list_t));


	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /*Assing data*/
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;

	return (*head);
}
