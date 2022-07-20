#include "main.h"

/**
 * read_textfile - reads a text file and prints it tothe POSIX standard output
 * @filename: the filename.
 * @letters: the size by letters.
 * Return: Always ssize_t.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sst;
	char *buff;

	buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	sst = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, sst);

	free(buff);
	close(fd);
	return (sst);
}
