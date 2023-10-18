#include "monty.h"

/**
 * push - Put an element on the top of the stack, or prints an error message.
 * @stack: The element to be pushed to the top of the stack, (TOS).
 * @line_number: The current line in a file, being read for opcodes.
 * Return: Void/nothing.
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_TOS, *current_TOS;

	if (stack == NULL)
	{
		fprintf(stderr, "L<%d>: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	new_TOS = malloc(sizeof(stack_t));
	if (new_TOS == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_TOS->n = (*stack)->n;
	new_TOS->next = NULL;

	if (*stack == NULL)
	{
		new_TOS->prev = NULL;
		*stack = new_TOS;
		return;
	}
	current_TOS = *stack;

	while (current_TOS->next != NULL)
	{
		current_TOS = current_TOS->next;
	}
	current_TOS->next = new_TOS;
	new_TOS->prev = current_TOS;
}
