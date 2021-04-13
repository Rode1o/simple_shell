#include "holberton.h"

/**
 *sigint_handler - control_d.
 *
 *@sigint: control_d.
 */

void sigint_handler(int sigint)
{
	
	if (sigint == SIGINT)
	{
		printf("oo");	
	
	}
	
	/*signal(SIGINT, sigint_handler);
	write(STDOUT_FILENO, "\n$ ", 3);
	fflush(stdout);*/
}
