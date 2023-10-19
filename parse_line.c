#include "monty.h"

/**
 * parse_line - Parses the line in the file to find an opcode.
 * @line: String to be checked for the opcode.
 * @stack: The top of the stack.
 * @line_number: The current line number.
 * Return: Nothing.
 */
void parse_line(char *line, stack_t **stack, unsigned int line_number)
{
	char *opcode;
	int i;

	instruction_t opcodes[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{"queue", queue},
		{NULL, NULL}
	};

	opcode = strtok(line, " \n");
	if (opcode == NULL || opcode[0] == '#')
		return;

	for (i = 0; opcodes[i].opcode != NULL; i++)
		if (strcmp(opcode, opcodes[i].opcode) == 0)
		{
			opcodes[i].f(stack, line_number);
			return;
		}
	opcode_error(line_number, opcode);
	free_stack(*stack);
	free(line);
	exit(EXIT_FAILURE);
}
