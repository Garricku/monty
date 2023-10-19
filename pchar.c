#include "monty.h"

/**
 * _pchar - Prints the char at the top of the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number of the opcode.
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	int ascii_value;

	if (*stack == NULL)
	{
		fprintf(stderr, "L<%u>: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	ascii_value = (*stack)->n;
	if (ascii_value < 0 || ascii_value > 127)
	{
		fprintf(stderr, "L<%u>: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ascii_value);
}
