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
 * add_node - add new node a beginning of a a list
 * @head: pointer
 *@str:string
 * Return:  number elements of linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	/*Using malloc*/
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /*Assing data*/
	new_node->len = _strlen(str);

	new_node->next = *head;
	*head = new_node;

	return (*head);
}
