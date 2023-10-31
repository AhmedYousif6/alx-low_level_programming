#include "main.h"

/**
 * read_textfile - reads text from file and print it.
 * @filename: name of the file.
 * @letters: num of bytes to be read.
 * Return: num of bytes (by) read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t by;
	char buff[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	by = read(fd, &buff[0], letters);
		by = write(STDOUT_FILENO, &buff[0], by);
	close(fd);
	return (by);
}
