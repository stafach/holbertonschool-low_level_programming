#include "main.h"

/**
*create_file- create a file if no exist or truncate if exist
*@filename: the file to create
*@text_content: the text to write in the string
*Return: 1 on success or -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int op, fw, i = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_CREAT
	| O_TRUNC, S_IRUSR | S_IWUSR);

	if (op == -1)
		return (-1);

	if (text_content == NULL)
		return (op);

	while (text_content[i] != '\0')
		i++;

	fw = write(op, text_content, i);
	if (fw == -1 || fw != i)
	{
		close(op);
		return (-1);
	}
	close(op);
	return (1);
}
