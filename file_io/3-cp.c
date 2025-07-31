#include "main.h"

/**
*main - entry point
*@argc: number of arg we give to main
*@argv: the arguments we give
*Return: 0
*/

int main(int argc, char **argv)
{
	int op, op2, cl, cl2, fr, fw;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fr = read(op, buffer, sizeof(buffer));
	if (fr == -1)
	{
		close(op);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	op2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (op2 == -1)
	{
		close(op);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	fw = write(op2, buffer, fr);
	if (fw == -1)
	{
		close(op2);
		close(op);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	cl = close(op);
	cl2 = close(op2);
	if (cl2 == -1 || cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op2);
		exit(100);
	}
	return (0);
}
