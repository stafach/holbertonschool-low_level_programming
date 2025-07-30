#include "main.h"

/**
*append_text_to_file - appends text at the end of a file
*@filename: the file
*@text_content: the text to appends
*Return: 1 on success or -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int op, fw, i = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);

	if (text_content == NULL)
		return (op);

	while (text_content[i] != '\0')
		i++;

	fw = write(op, text_content, i);

	if (fw == -1)
	{
		close(op);
		return (-1);
	}
	close(op);
	return (1);
}
