#include "main.h"
/**
 * create_file - f
 * @filename: char
 * @text_content: char
 * Return: int
*/
int create_file(const char *filename, char *text_content)
{
	FILE *f;
	int p;
	mode_t permissions = S_IRUSR | S_IWUSR;
	int m;
	int e;

	p = m = e = 0;
	if (filename == NULL)
		return (-1);
	f = fopen(filename, "w+");
	if (f == NULL)
		return (-1);
	p = fprintf(f, "%s", text_content);
	if (p == -1)
		return (-1);
	m = chmod(filename, permissions);
	if (m != 0)
		return (-1);
	e = fclose(f);
	if (e == -1)
		return (-1);
	return (1);
}
