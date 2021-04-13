#include "holberton.h"

/**
 *line_validator - validates if the function receives an exit, env or cd
 *
 *@tok: recives the value of  the funcion token.
 *
 *Return: return(0)  if the line validator is  exit, env or cd. else return (1)
 *
 */

int line_validator(char *tok[])
{
	if (tok[0] == NULL)
	{
		return(2);
	}
	if (_strcmp(tok[0], "exit") == 0)
	{
		return (0);
	}
	if (_strcmp(tok[0], "env") == 0)
	{
		_env(tok);
	}
	if (_strcmp(tok[0], "cd") == 0)
	{
		return (_cd(tok));
	}
	return (1);
}
