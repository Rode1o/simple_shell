#include "holberton.h"


/**
*errors - printf if de comand recived is incorrect.
*
* @error: recives the value of  the funcion token.
*/
void errors(char __attribute__((unused)) **error)
{
	if (error[0])

	{
	write(STDERR_FILENO, *error, 3);
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, "1", 1);
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, "not found", _strlen("not found"));
	write(STDERR_FILENO, "\n", _strlen("\n"));
	}
}
