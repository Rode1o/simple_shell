#include "holberton.h"

/**
 *
 *
 *
 *
 *
 */

int main(void)
{
	char *line = NULL;
	size_t bufsize = 0;
	int num;
	char *tok[100];
	int validators = 1;

	signal(SIGINT,  sigint_handler);

	while (1)
	{

		_putchar('$');
		num = getline(&line, &bufsize, stdin);
		if (num == EOF)
		{
			free(line);
			return (0);
		}


		token(line, tok);
		validators = line_validator(tok);

		if (validators == 0)
		{
			free(line);
			return(0);
		}
		else
		{	
			execute(tok, line);
		}
	}
	free(line);
	return (0);
}
