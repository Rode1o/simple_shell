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
	int i = 0;
	char path[1024] = "/bin";
	struct stat st;

	while (line[i] == ' ')
		i++;
	if (line[i] == path[0])
	{
		_strcpy(path, *tokens);
	}

	else if (tokens[0])
	{
		if (stat(*tokens, &st) == 0 && st.st_mode & X_OK)
		{
			execve(tokens[0], tokens, NULL);
			return (0);
		}
		else
		{
			_strcat(path, "/"), _strcat(path, *tokens);
		}
	}
	else
	{
		*tokens = NULL;
		line = NULL;
		return (0);
	}

	_fork(path, tokens, line);

	return (1);
}

/**
 * _fork - check  if the command recived is true.
 *
 *@tokens: recives the value of  the funcion token.
 *
 *@line: arguments received
 *
 *@path: path
 *
 */
void _fork(char *path, char **tokens, char *line)
{
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		if (execve(path, tokens, environ) == -1)
		{
			errors(tokens);
		}
		free(line);
		exit(EXIT_SUCCESS);
	}
	else if (pid < 0)
	{
		errors(tokens);
		/*exit(EXIT_SUCCESS);*/
	}
	else
		wait(NULL);
}
