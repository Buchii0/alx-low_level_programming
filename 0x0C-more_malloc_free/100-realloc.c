#include "holberton.h"
/**
 * _realloc - Reallocates a space in memory
 * @ptr: The pointer with allocated size in memory
 * @old_size: Current allocated size
 * @new_size: The new size to realloc
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str, *pptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		str = malloc(new_size);
		if (str == NULL)
			return (NULL);
		return (str);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	str = malloc(new_size);
	if (str == 0)
		return (NULL);
	pptr = ptr;

	while (i < old_size)
	{
		str[i] = pptr[i];
		i++;
	}

	free(ptr);
	return (str);
}
