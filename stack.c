#include "monty.h"

/**
 * stack - Sets to stack.
 */
void stack(stack_t **stack, unsigned int line_number)
{
	char mode = 's';

	_set_mode(stack, mode, line_number);
}
