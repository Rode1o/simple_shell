#include "holberton.h"

/**
 *execute - check  if the command recived is true.
 *
 *@tokens: recives the value of  the funcion token.
 *
 *@line: arguments received
 *
 *Return: return (1).
 */

int execute(char **tokens, char *line)
{
	pid_t pid;
	int i = 0;

	char path[1024] = "/bin", *aux = "/b";


	/*if (line[i] == aux[0] && line[i + 1] == aux[1])
	{	
		_strcpy(path, line);
	}*/

	_strcat(path, "/"), _strcat(path, *tokens);

	pid = fork();
	if (pid == 0)
	{
		if (execve(path, tokens, environ) == -1)
		{
			errors(tokens);
			return (0);
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		errors(tokens);
		return (0);
	}
	else
	{
		wait(NULL);
	}
	return (1);
}
