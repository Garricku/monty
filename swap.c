#include "monty.h"

/**
 * _swap - Swaps the top two elements of the stack.
 * @stack: The top of the stack.
 * @line_number: The current line number.
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L<%u>: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
