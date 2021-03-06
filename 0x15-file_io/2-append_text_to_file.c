#include "holberton.h"
/**
 *append_text_to_file- Append file
 *@filename: file name
 *@text_content: content file
 *Return: pointer
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int op, w, i = 0;

	if (filename == NULL)
	return (-1);
	op = open(filename, O_RDWR | O_APPEND);
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
