#include "shell.h"
/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int result;
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
