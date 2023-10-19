#include "monty.h"

/**
 * add_node - Adds a new node to the top of the stack.
 * @stack: A pointer to the top of the stack.
 * @n: The value to be added to the new node.
 *
 * Return: A pointer to the new node.
 */
stack_t *add_node(stack_t **stack, int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		malloc_error();


	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;
	return (new_node);
}
