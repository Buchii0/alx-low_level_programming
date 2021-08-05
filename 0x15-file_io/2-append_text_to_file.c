#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: is the name of the file to create
 * @text_content :  is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_file;

	/*Check content file*/
	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	/*Open file*/
	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1) /*If it fails*/
		return (-1);

	/*Write file*/
	write_file = write(fd, text_content, strlen(text_content));
	close(fd);

	if (write_file == -1) /*If it fails*/
		return (-1);

	return (1);
}
