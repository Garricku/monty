#include "monty.h"

/**
 * _sub - Subtracts the top element of the stack from the second top element.
 * of the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number of the opcode.
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	int diff;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L<%u>: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	diff = (*stack)->next->n - (*stack)->n;
	_pop(stack, line_number);
	(*stack)->n = diff;
}
