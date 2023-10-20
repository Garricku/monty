#include "monty.h"

/**
 * _push - Put an element on the top of the stack, or prints an error message.
 * @stack: The element to be pushed to the top of the stack, (TOS).
 * @line_number: The current line in a file, being read for opcodes.
 * Return: Void/nothing.
 */
void _push(stack_t **stack, unsigned int line_number)
{
	char *arg;
	int n;

	arg = strtok(NULL, " \n");
	if (arg == NULL || !is_number(arg))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = atoi(arg);
	add_node(stack, n);
}
