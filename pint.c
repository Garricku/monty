#include "monty.h"

/**
 * _pint - Prints the value at the top of the stack, followed by a newline.
 * @stack: Pointer to the top of the stack.
 * @line_number: The line in the file currently being executed.
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L<%u>: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
