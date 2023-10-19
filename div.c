#include "monty.h"

/**
 * _div - Divides the second top element of the stack by top element of stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number of the opcode.
 */
void _div(stack_t **stack, unsigned int line_number)
{
	int quotient;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L<%u>: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L<%u>: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	quotient = (*stack)->next->n / (*stack)->n;
	_pop(stack, line_number);
	(*stack)->n = quotient;
}
