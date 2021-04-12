#include "holberton.h"

/**
 *token - divide the string line into tokens
 *	  according to the delimiter (SEPARATORS)
 *
 *@line: arguments received
 *
 *@tok: devided tokens.
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
