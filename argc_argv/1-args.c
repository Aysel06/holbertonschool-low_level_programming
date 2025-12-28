#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: argument count
 * @argv: argument vector (unused)
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /* argv istifadə olunmur, warning-ləri aradan qaldırmaq üçün */

	/* argc - 1, çünki argv[0] proqramın adıdır */
	printf("%d\n", argc - 1);

	return (0);
}
