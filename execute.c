#include "holberton.h"

int ejecutar(char **tok)
{
	pid_t pid;
	int status;
	
	pid = fork();

	if (pid == 0)
	{
		if (execve(tok[0], tok, NULL) == -1)
			perror("Error");

		return (1);
	}

	else if (pid < 0)
	{
		perror("Error");
		return (0);
	}

	else
	{
		do {
			waitpid(pid, &status, WUNTRACED);
		
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}

	return (1);
}
