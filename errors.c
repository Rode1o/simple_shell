#include "holberton.h"

void errors(char __attribute__((unused)) **tokens)
{
	if (tokens[0])
	{
	write(STDOUT_FILENO, "hsh", 3);
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, "1", 1);
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, "not found", _strlen("not found"));
	write(STDOUT_FILENO, "\n", _strlen("\n"));
	}
}
