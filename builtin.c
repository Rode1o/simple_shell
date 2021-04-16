#include "holberton.h"

/**
 *_env - tenvironment variable
 *
 *@commands: recives the value of  the funcion token.
 *
 */

void _env(char *tok[])
{
	int i;
	char *s;

	if (tok[1] != NULL)
	{
		return;
	}
	else
	{
		for (i = 0; environ[i] != '\0'; i++)
		{
			s  = environ[i];
			write(STDOUT_FILENO, s, _strlen(s));
			write(STDOUT_FILENO, "\n", 1);
		}
	}
}

/**
 *_cd - functions.
 *
 *@args: recives the value of  the funcion token.
 *
 *Return: return(2);
 */

int _cd(char *tok[])
{
	if (tok[1] == NULL)
	{
		errors(tok);
	}
	else

	{
		if (chdir(tok[1]) != 0)
		{
			errors(tok);
		}
	}
	return (2);
}
