#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: argument count (unused)
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
    (void)argc; /* argc istifadə olunmur, warning-ləri aradan qaldırmaq üçün */

    printf("%s\n", argv[0]);

    return 0;
}
