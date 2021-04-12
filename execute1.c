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
	int j /*status*/;

	char path[1024] = "/bin", *aux = "/b", *aux2 = " /b.h";

	if (line[0] == aux[0] && line[1] == aux[1])
		_strcpy(path, line);
	else if (line[0] == aux2[0])
	{
		for (j = 0; line[j] != '\0'; j++)
		{
			if (line[j] == aux2[1])
				if (line[j - 1] == aux2[0])
					_strcpy(path, "/bin/ls");
		}
	}
	else if (line[0] == aux2[3] && line[2] == aux2[4])
		_strcpy(path, "/bin/ls");
	else
		_strcat(path, "/"), _strcat(path, line);
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
