#include "holberton.h"
#define BUFFERSIZE 1204

/**
 * main - cps contents of one file to another
 * @ac: arguement count
 * @av: arguement list: file names
 * Return: 0;
 */
int main(int ac, char **av)
{
	int fd, fd_dest, read_file, check;
	char buffer[BUFFERSIZE];
	/*Opening a file for writing by the owner*/
	mode_t mode_file = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	/*Block of algorithm for validate data*/
	if (ac != 3)
		/*print to a file descriptor */
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd_dest = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode_file);
	if (fd_dest == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	read_file = check = 1;
	while (read_file)
	{
		read_file = read(fd, buffer, BUFFERSIZE);
		if (read_file == -1) /*If can't read*/
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (read_file > 0)
		{
			check = write(fd_dest, buffer, read_file);
			if (check == -1) /*If can't write*/
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	check = close(fd); /*close file*/
	if (check == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);

	check = close(fd_dest);

	if (check == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest), exit(100);
	return (0);
}
