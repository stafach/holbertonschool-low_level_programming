#include "main.h"

/**
*read_textfile - reads a text file and prints it to the standart output
*@filename: the file to read
*@letters: the number of char
*Return: 0 or the number of letter
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op;
	char *buffer;
	ssize_t fr, fw;

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	fr = read(op, buffer, letters);

	if (fr == -1)
	{
		free(buffer);
		close(op);
		return (0);
	}

	fw = write(STDOUT_FILENO, buffer, fr);

	if (fw == -1 || fw != fr)
	{
		close(op);
		return (0);
	}
	free(buffer);
	close(op);
	return (fw);
}
