#include "monty.h"

/**
 * is_number - Checks if string is a number.
 * @string: To be checked.
 * Return: 1 if it is a number, 0 if it is not a number.
 */
int is_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (!(str[i] >= '0' && str[i] <= '9') && str[i] != '-')
			return (0);
	return (1);
}
