#include "monty.h"

/**
 * add - Returns the sum of all the data (n) of a linked list.
 * @head: The head node.
 * Return: The sum of n and n.
 */
void add(stack_t **stack, unsigned int line_number)
{
	int sum = 0, len = 0, full_len = 0;
	stack_t *value = *stack;

	if (QUEUE == 1)
	{
		while (len <= 2)
		{
			len++;
			sum += value->n;
			value = value->next;
		}
	}
	else
	{
		while (value != NULL)
		{
			len++;
			value = value->next;
		}
		full_len = len;
		while (len > (full_len - 2))
		{
			sum += value->n;
			value = value->prev;
			len--;
		}
	}
	printf("%d\n", sum);
}
