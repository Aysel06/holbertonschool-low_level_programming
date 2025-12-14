#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: integer value
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int result;
	int started;

	i = 0;
	sign = 1;
	result = 0;
	started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && started == 0)
		{
			sign = sign * -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			if (result > (INT_MAX - (s[i] - '0')) / 10)
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			result = result * 10 + (s[i] - '0');
		}
		else if (started == 1)
			break;
		i++;
	}

	return (result * sign);
}