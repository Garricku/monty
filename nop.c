#include "monty.h"

/**
 * _nop - Does nothing.
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number of the opcode being executed in the file.
 * Return: Nothing.
 */
void _nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
