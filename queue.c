#include "monty.h"

/**
 * queue - Sets to queue.
 * @stack: The top of the stack.
 * @line_number: The current line number.
 */
void queue(stack_t **stack, unsigned int line_number)
{
	char mode = 'q';

	_set_mode(stack, mode, line_number);
}
