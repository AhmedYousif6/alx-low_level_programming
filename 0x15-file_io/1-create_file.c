#include "main.h"

/**
 * _strlen - find the length of a string.
 * @str: takes string.
 * Return: the length of the string.
 */

int _strlen(char *str)
{
	int count = 0;

	if (!str)
		return (0);
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}




/**
 * create_file - create a file.
 * @filename: the name of the file.
 * @text_content: text to be write.
 * Return: 1 on success or 0 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t by = 0;
	ssize_t len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		by = write(fd, text_content, len);
	close(fd);
	return (by == len ? 1 : -1);
}
