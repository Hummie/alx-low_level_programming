#include "main.h"
#include <stdlib.h>
/**
  *read_textfile - function to read and print textfile
  *@filename: file to be accessed
  *@letters: Number of letter to be read
  *Return: Actual number of letters read
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t byte_read, byte_write;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	byte_read = read(fd, buffer, letters);
	close(fd);
	if (byte_read == -1)
	{
		free(buffer);
		return (0);
	}
	byte_write = write(STDOUT_FILENO, buffer, byte_read);
	free(buffer);
	if (byte_read != byte_write)
		return (0);
	return (byte_write);
}
