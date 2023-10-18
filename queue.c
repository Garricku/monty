#include "monty.h"

/**
 * queue - Changes to queue mode.
 * @stack: Not used.
 * @line_number: Not used.
 */
void queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	QUEUE = 1;
}
