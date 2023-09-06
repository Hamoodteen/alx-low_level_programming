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
	char *f;
	int p;

	c = NULL;
	if (filename == NULL)
		return (0);
	fd = fopen(filename, "r");
	if (fd == NULL)
		return (0);
	c = malloc(letters + 1);
	if (c == NULL)
	{
		fclose(fd);
		return (0);
	}
	f = fgets(c, (letters + 1), fd);
	if (f == NULL)
	{
		free(c);
		fclose(fd);
		return (0);
	}
	if (letters < strlen(c))
		p = fprintf(stdout, "%s", c);
	else
		p = fprintf(stderr, "%s", c);
	if (p < 0)
		return (0);
	free(c);
	fclose(fd);
	return (p);
}
