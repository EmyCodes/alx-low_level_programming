#include <stdio.h>
#include <stdlib.h>

char *argstostr(int, char **);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
	{
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}

