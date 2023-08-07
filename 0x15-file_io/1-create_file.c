#include "main.h"
/**
  *create_file - function to create file
  *@filename: name of file to create
  *@text_content: string to write to file
  *Return: 1 on success or -1 upon failure
  */
int create_file(const char *filename, char *text_content)
{
	int rw, fd, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (i = 0; i < text_content[i]; i++)
		;
	rw = write(fd, text_content, i);

	if (rw == -1)
		return (-1);

	close(fd);

	return (1);
}
