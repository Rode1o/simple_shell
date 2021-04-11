#include "holberton.h"

int line_validator(char **tok)
{
	if (tok[0] == NULL)
	{
		return (1);
	}
	if (_strcmp(tok[0], "exit") == 0)
	{
		return (0);
	}
	if (_strcmp(tok[0], "env") == 0)
	{
		_env (tok);
	}
	if (_strcmp(tok[0], "cd") == 0)
	{
		return (_cd(tok));
	}
	return (1);
}
