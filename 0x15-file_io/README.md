# PROJECT FILE I/O - HOLBERTON SCHOOL 
_Okonkwo Godspower_

*Task #0* Write a function that reads a text file and prints it to the POSIX standard output.
    Prototype: ssize_t read_textfile(const char *filename, size_t letters);

    where letters is the number of letters it should read and print

    returns the actual number of letters it could read and print

    if the file can not be opened or read, return 0

*Task #1* Create a function that creates a file.

    Prototype: int create_file(const char *filename, char *text_content);

    where filename is the name of the file to create and text_content is a NULL terminated string to write to the file

    Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)

    The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.

*Task #2* Write a function that appends text at the end of a file.

    Prototype: int append_text_to_file(const char *filename, char *text_content);

    where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file

    Return: 1 on success and -1 on failure

    Do not create the file if it does not exist


*Task #3* Write a program that copies the content of a file to another file.



