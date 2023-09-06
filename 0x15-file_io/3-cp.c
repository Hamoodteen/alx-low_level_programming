#include "main.h"
/**
 * over - f
 * @a: int
 * @g: char
 * Return: void
*/
void over(int a, char *g)
{
	if (a == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	else if (a == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", g);
		exit(98);
	}
	else if (a == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", g);
		exit(99);
	}
	else if (a == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", 2);
		exit(100);
	}
}
/**
 * main - f
 * @argc: int
 * @argv: char
 * Return: 0
*/
int main(int argc, char **argv)
{
	char buf[1024];
	int p, s, e;
	FILE *f;
	FILE *fl;
	size_t r;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	p = s = e = r = 0;
	if (argc != 3)
	{
		over(97, NULL);
	}
	f = fopen(argv[1], "r");
	if (f == NULL)
	{
		over(98, argv[1]);
	}
	r = fread(buf, sizeof(char), sizeof(buf), f);
	if (ferror(f))
	{
		over(98, argv[1]);
	}
	fl = fopen(argv[2], "w+");
	if (fl == NULL)
	{
		over(99, argv[2]);
	}
	p = fprintf(fl, "%s", buf);
	if (p == -1)
	{
		over(99, argv[2]);
	}
	s = chmod(argv[2], permissions);
	e = fclose(fl);
	if (e == -1)
	{
		over(100, NULL);
	}
	return (0);
}
