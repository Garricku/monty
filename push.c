#include "monty.h"

/**
 * push - Put an element on the top of the stack, or prints an error message.
 * @stack: The element to be pushed to the top of the stack, (TOS).
 * @line_number: The current line in a file, being read for opcodes.
 * Return: Void/nothing.
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *top_of_stack;

	if (stack == NULL)
	{
		fprintf(stderr, "L<%d>: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	top_of_stack = malloc(sizeof(stack_t));
	if (top_of_stack == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (QUEUE == 1)
	{
		top_of_stack->n = stack;
		top_of_stack->next = NULL;
	}
	else
	{
		while (top_of_stack != NULL)
			top_of_stack = top_of_stack->next;

		top_of_stack->n = stack;
		top_of_stack->next = NULL;
	}
}
