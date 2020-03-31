#include "holberton.h"
/**
 * read_textfile - Read File
 * @filename: file name
 * @letters: Size of file
 * Return: pointer
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t w;
int op, r;
char *c;

	if (filename == NULL)
		return (0);
	c = malloc(letters);
	if (c == NULL)
		return (0);
	op = open(filename, O_RDWR);
	if (op == -1)
		return (0);
	r = read(op, c, letters);
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, c, r);
	if (w == -1)
		return (0);
	free(c);
	close(op);

return (w);
}
