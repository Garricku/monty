#include "monty.h"

/**
 * _rotr - Rotates the stack to the bottom.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number of the opcode.
 */
void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = *stack;
		(*stack)->prev = temp;
		temp->prev->next = NULL;
		temp->prev = NULL;
		*stack = temp;
	}
}
