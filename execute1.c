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
	int i = 0, o;
	char path[8192] = "/bin", *aux = "/b", *aux2 = " /b.h";
	

	while (line[i] == ' ')
		i++;
	if (line[i] == aux[0] && line[1] == aux[1])
	{
		_strcpy(path, *tokens);
	}
	else if (line[i] == aux2[0])
	{
		for (o = 0; line[o] != '\0'; o++)
		{
			if (line[o] == aux2[1])
				if (line[o - 1] == aux2[0])
					_strcpy(path, "/bin/ls");
		}
	}
	else if (line[0] == aux2[3] && line[2] == aux2[4])
		_strcpy(path, "/bin/ls");
	
		
	else 
		{
			_strcat(path, "/"), _strcat(path, *tokens);
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
	int status;

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
	do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
		wait(NULL);
}
