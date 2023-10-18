#include "monty.h"

/**
 * pop - Removes the top element of the stack.
 * @stack: The pointer to the first node.
 * @line_number: The current line that is being executed.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L<%d>: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	if (QUEUE == 1)
	{
		free();
	}
