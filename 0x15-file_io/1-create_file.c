#include "holberton.h"
/**
 *create_file - Create file
 *@filename: file name
 *@text_content: content file
 *Return: pointer
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, op, w;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (op == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
	}
	w = write(op, text_content, i);
	if (w == -1)
		return (-1);
	close(op);
	return (1);
}