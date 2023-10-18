#include "monty.h"

/**
 * pint - Prints the value at the top of the stack, followed by a newline.
 * @stack: Pointer to the structs first element.
 * @line_number: The line in the file currently being executed.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *top_of_stack;

	if (*stack == NULL)
	{
		printf("L<%d>: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
	if (QUEUE == 1)
	{
		top_of_stack = *stack;
		top_of_stack->n = *stack;
		printf("%d\n", top_of_stack->n);
	}
	else
	{
		while (top_of_stack != NULL)
			top_of_stack = top_of_stack->next;
		
		printf("%d\n", top_of_stack->n);
	}
}
