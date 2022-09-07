#include "shell.h"

/**
 * print_environment - Prints environment variables
 *
 */

void print_environment(void)
{
	int i = 0;
	extern char **environ;

	while (environ[i])
	{
		printf("%s\n", environ[i++]);
	}
}
