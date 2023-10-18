#include "monty.h"

/**
 * is_opcode - Checks if a string is a valid opcode name.
 * @string: String to be checked.
 * Return: 1 if it is a valid opcode or -1 if not.
 */
int is_opcode(char *string)
{
	int i = 0;

	instruction_t valid_opcode[] = {
		{"pall", pall},
		{"push", push},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", div},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{"stack", stack},
		{"queue", queue},
		{NULL, NULL}
	};
	if (string == NULL)
		return (-1);

	if (string[i] == '#')
		return (-1);

	for (i = 0; valid_opcode[i].opcode != NULL; i++)
	{
		if (strcmp(string, valid_opcode[i].opcode))
			return (1);
	}
	return (-1);
}
