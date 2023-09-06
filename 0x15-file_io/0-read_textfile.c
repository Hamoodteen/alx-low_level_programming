#include "main.h"
/**
 * read_textfile - f
 * @filename: char
 * @letters: int
 * Return: int
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	int f, r, p, e;

	f = r = p = e = 0;
	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	c = NULL;
	c = malloc(letters + 1);
	if (c == NULL)
		return (0);
	r = read(f, c, letters);
	if (r == -1)
	{
		free(c);
		return (0);
	}
	if ((letters + 1) < strlen(c))
		p = write(STDOUT_FILENO, c, r);
	else
		p = write(STDERR_FILENO, c, r);
	if (p < 0)
	{
		free(c);
		return (0);
	}
	e = close(f);
	if (e == -1)
	{
		free(c);
		return (0);
	}
	free(c);
	return (p);
}
