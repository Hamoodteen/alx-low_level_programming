#include "main.h"
/**
 * read_textfile - f
 * @filename: char
 * @letters: int
 * Return: int
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd;
	char *c;
	int p;

	c = NULL;
	if (filename == NULL)
		return (0);
	fd = fopen(filename, O_RDONLY);
	if (fd == NULL)
		return (0);
	p = printf("%s", fgets(c, letters, fd));
	if ((p < 0) || (letters > strlen(c)))
		return (0);
	fclose(fd);
	return (p);
}
