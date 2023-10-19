#include "monty.h"

/**
 * _set_mode - Sets the mode of the data to either stack or queue.
 * @stack: A pointer to the top of the stack.
 * @mode: The mode to set (stack or queue).
 * @line_number: The line number of the opcode.
 */
void _set_mode(stack_t **stack, char mode, unsigned int line_number)
{
	char current_mode = 's';

	if (mode == 's' && current_mode == 'q')
		_rotr(stack, line_number);

	else if (mode == 'q' && current_mode == 's')
		_rotl(stack, line_number);

	current_mode = mode;
}
