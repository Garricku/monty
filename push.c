#include "monty.h"

/**
 * push - Pushes an element to the stack, or prints an error message.
 * @number: The element to be pushed to the stack.
 * Return: Void/nothing.
 */
void push(int number)
{
	int line_number = 1;
	stack_t *push_num = *head;

	if (number == -1)
	{
		write(2, "L<"line_number">: usage: push integer\n", 26)
		exit(EXIT_FAILURE);
	}
	/*get_opcode(file, line_number);*/
	push_num = malloc(sizeof(stack_t));
	if (push_num == NULL)
	{
		write(2, "Error: malloc failed\n", 19);
		exit(EXIT_FAILURE);
	}
	push_num = push_num->next;
	push_num->n = number;

