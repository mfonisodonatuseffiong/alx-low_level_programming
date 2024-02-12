#include "main.h"

/**
 * read_textfile - This program is aim at reading a text file and prints the letters
 * @filename: A pointer to the name of the file
 * @letters: numbers of letters the function should read and also print.
 *
 * Return: If the function fails or filename is NULL it will return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrd = read(fd, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(fd);

	free(buffer);

	return (nwr);
}
