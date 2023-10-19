#include "monty.h"

/**
 * _pstr - Prints the string starting at the top of the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number of the opcode.
 */
void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;

	while (temp != NULL && temp->n >= 0 && temp->n <= 127)
	{
		printf("%c", temp->n);
		if (temp->n == 0)
			break;

		temp = temp->next;
	}
	printf("\n");
}
