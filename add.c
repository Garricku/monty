#include "monty.h"

/**
 * _add - Returns the sum of all the data (n) of a linked list.
 * @stack: The top of the stack
 * @line_number: The current line number.
 * Return: The sum of n and n.
 */
void _add(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L<%u>: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = (*stack)->n + (*stack)->next->n;
	_pop(stack, line_number);
	(*stack)->n = sum;
}
