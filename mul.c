#include "monty.h"

/**
 * _mul - Multiplies the second top element of the stack with the top element of the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number of the opcode.
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	int product;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	product = (*stack)->n * (*stack)->next->n;
	_pop(stack, line_number);
	(*stack)->n = product;
}
