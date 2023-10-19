#ifndef MONTY_H
#define MONTY_H

/** GLOBAL VARIABLE **/

extern char current_mode;

/** LIBRARIES **/

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

/** STRUCTS **/

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/** PROTOTYPES **/

int main(int argc, char **argv);
int is_number(char *str);
stack_t *add_node(stack_t **stack, int n);
void free_stack(stack_t *stack);
void parse_line(char *line, stack_t **stack, unsigned int line_number);
void usage_error(void);
void file_error(const char *filename);
void malloc_error(void);
void opcode_error(unsigned int line_number, const char *opcode);
void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void _add(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void _mul(stack_t **stack, unsigned int line_number);
void _mod(stack_t **stack, unsigned int line_number);
void _pchar(stack_t **stack, unsigned int line_number);
void _pstr(stack_t **stack, unsigned int line_number);
void _rotl(stack_t **stack, unsigned int line_number);
void _rotr(stack_t **stack, unsigned int line_number);
void _set_mode(stack_t **stack, char mode, unsigned int line_number);
void queue(stack_t **stack, unsigned int line_number);
void stack(stack_t **stack, unsigned int line_number);

#endif /** END OF MONTY_H **/
