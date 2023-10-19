#include "monty.h"

/**
 * _mod - Computes the rest of the division of the second top element of
 * the stack by the top element of the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number of the opcode.
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	int remainder;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L<%u>: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L<%u>: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	remainder = (*stack)->next->n % (*stack)->n;
	_pop(stack, line_number);
	(*stack)->n = remainder;
}
