#include "main.h"
/**
 * append_text_to_file - f
 * @filename: char
 * @text_content: char
 * Return: int
*/
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *f;
	int p;
	int m;
	int e;

	p = m = e = 0;
	if (filename == NULL)
		return (-1);
	f = fopen(filename, "a");
	if (f == NULL)
		return (-1);
	p = fprintf(f, "%s", text_content);
	if (p == -1)
		return (-1);
	e = fclose(f);
	if (e == -1)
		return (-1);
	return (1);
}
