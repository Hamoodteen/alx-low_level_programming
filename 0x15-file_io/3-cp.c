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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (a == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", g);
		exit(98);
	}
	else if (a == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", g);
		exit(99);
	}
	else if (a == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", g);
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
	int p, s, e1, e2, f, fl, r;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	p = s = e1 = e2 = r = 0;
	if (argc != 3)
		over(97, NULL);
	if (argv[1] == NULL)
		over(98, argv[1]);
	if (argv[2] == NULL)
		over(99, argv[2]);
	f = open(argv[1], O_RDONLY);
	if (f == -1)
		over(98, argv[1]);
	r = read(f, buf, sizeof(buf));
	if (r == -1)
		over(98, argv[1]);
	fl = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC);
	if (fl == -1)
		over(99, argv[2]);
	p = write(fl, buf, r);
	if (p == -1)
		over(99, argv[2]);
	s = chmod(argv[2], permissions);
	if (s == -1)
		over(99, argv[2]);
	e1 = close(f);
	if (e1 == -1)
		over(100, argv[1]);
	e2 = close(fl);
	if (e2 == -1)
		over(100, argv[2]);
	return (0);
}
