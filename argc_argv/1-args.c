#include <stdio.h>

/**
 * main - prints the number of arguments passed to program
 * @argc: argument count
 * @argv: argument vector (unused)
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /* argv unused, prevents warnings */

	/* argc - 1, ignore program name */
	printf("%d\n", argc - 1);

	return (0);
}
