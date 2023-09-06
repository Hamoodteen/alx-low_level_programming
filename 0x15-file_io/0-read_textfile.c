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
	char *g;
	char *c;
	int p;

	c = NULL;
	if (filename == NULL)
		return (0);
	fd = fopen(filename, O_RDONLY);
	if (fd == NULL)
		return (0);
	g = fgets(c, letters, fd);
	if (g == NULL)
		return (0);
	while (g != NULL)
		p = printf("%s", c);
	fclose(fd);
	return (p);
}
