#include "header.h"
/**
 * line_reader - lecture function.
 *
 * Description: function to reads an entire line from stdin, storing
 * the text (including the newline and termination characters) in a buffer
 * and storing the address of the buffer in line.
 *
 * Return: The line read.
 */

char *line_reader(void)
{
	char *line = NULL;
	size_t buffsize = 0;
	ssize_t container = 0;

	container = getline(&line, &buffsize, stdin);

	if (container == -1)
	{
		free(line);
		exit(0);
	}
	return (line);
}



