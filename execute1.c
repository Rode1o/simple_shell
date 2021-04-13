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

	char path[1024] = "/bin";

	while (line[i] == ' ')
		i++;

	/*printf("%s", tokens[0]);
*/
	if (line[i] == path[0])
	{
		_strcpy(path, *tokens);
	}

/*	else
		_strcat(path, "/"), _strcat(path, *tokens);
*/
	else if (tokens[0]) 
	{
		_strcat(path, "/"), _strcat(path, *tokens);
	}

	else
	{
		return(0);
		tokens = NULL;
	}
	pid = fork();
	if (pid == 0)
	{
		if (execve(path, tokens, environ) == -1)
		{
			errors(tokens);
			return (0);
		}
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
