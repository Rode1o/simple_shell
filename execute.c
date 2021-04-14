#include "header.h"
/**
 * executing - execute function.
 * @tokens: The tokenized line.
 * @line: Input from user
 *
 * Return: 1.
 */
int executing(char **tokens, char *line)
{
	pid_t pid;
	int i = 0, status;
	char path[1024] = "/bin";

	while (line[i] == ' ')
	{
		i++;
	}
	if (line[i] == path[0])
	{
	_strcpy(path, *tokens);
	}
	else if (tokens[0])
{
		_strcat(path, "/"), _strcat(path, *tokens);
}
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
		do {
			waitpid(pid, &status, WUNTRACED);

		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}
