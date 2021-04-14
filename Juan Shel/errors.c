#include "holberton.h"

/**
*errors - printf if de comand recived is incorrect.
*
* @error: recives the value of  the funcion token.
*/

void errors(char **error)
{
	if (error[0])

	{
	write(STDOUT_FILENO, *error, 3);
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, "1", 1);
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, "not found", _strlen("not found"));
	write(STDOUT_FILENO, "\n", _strlen("\n"));
	}
}
