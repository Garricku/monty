#include "monty.h"

/**
 * _pall - Prints all the elements of the linked list.
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number.
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->prev;
	}
}
