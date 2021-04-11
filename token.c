#include "holberton.h"

/**
 *
 *
 *
 *
 */

void token(char *line, char *tok[])
{
	char *token = NULL;
	int count = 0;



	token = strtok(line, SEPARATORS);
	tok[count] = token;

	for (count = 1; token != NULL; count++)
	{
		token = strtok(NULL, SEPARATORS);
		tok[count] = token;
	}
}
