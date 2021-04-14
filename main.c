#include "header.h"
/**
 * main - main function.
 *
 * Return: 0.
 */

int main(void)
{
	int sign = 1;
	char *line = NULL;
	char **tokens = NULL;
	char *str = "#Caribe_isFun ";
	int condition = 1;

	signal(SIGINT, sigint_controld);


	while (condition)
{
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, str, 14);

		}
		line = line_reader();
		sign = semicolon(line);
		tokens = line_parser(line);
		condition = line_validator(tokens);

		if (condition == 1 && sign == 1)
		{
			condition = executing(tokens, line);
		}
		free(line);
		free(tokens);
	}
	return (EXIT_SUCCESS);
}
/**
 * sigint_controld -  Signal Handler function.
 * @sigint: To catch SIGINT next time, need reset the Handler.
 *
 * Return: Nothing.
 */
void sigint_controld(int sigint)
{
	(void)sigint;

	signal(SIGINT, sigint_controld);
	write(STDOUT_FILENO, "\n$ ", 3);
	fflush(stdout);
}
