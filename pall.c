#include "monty.h"

/**
 * pall - Prints all the elements of the linked list.
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *top_of_stack = *stack, *first_in_queue = *stack

	if (stack == NULL)
		return;

	if (QUEUE == 1)
	{
		while (first_in_queue->next != NULL)
		{
			printf("%d\n", first_in_queue->n);
			first_in_queue = first_in_queue->next;
		}
	}
	else
	{
		while (top_of_stack->next != NULL)
			top_of_stack = top_of_stack->next;

		while (temp != NULL)
		{
			printf("%d\n", top_of_stack->n);
			top_of_stack = top_of_stack->prev;
		}
	}
}
