#include "monty.h"

/**
 * is_number - Checks if string is a number.
 * @string: To be checked.
 * Return: 1 if it is a number, -1 if it is not a number.
 */
int is_number(char *string)
{
	int i;

	if (string == NULL)
		return (-1);

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= '0' && string[i] <= '9')
			continue;

		else
			return (-1);
	}
	return (1);
}
