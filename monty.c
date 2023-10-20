#include "monty.h"

/**
 * usage_error - Prints an error message and exits with a FAILURE status.
 * Return: Nothing.
 */
void usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 * file_error - Prints an error message and exits the program.
 * @filename: The Path or file name of the file used as input.
 * Return: Nothing.
 */
void file_error(const char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}
/**
 * malloc_error - Prints an error message and exits (EXIT_FAILURE).
 * Return: Nothing.
 */
void malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
/**
 * opcode_error - Prints an error message and exits with a status.
 * @line_number: The current line number where the error occured.
 * @opcode: The user input opcode that was found.
 * Return: Nothing.
 */
void opcode_error(unsigned int line_number, const char *opcode)
{
	fprintf(stderr, "L%u: unknown instruction %s", line_number, opcode);
	exit(EXIT_FAILURE);
}
/**
 * main - Entry point.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Always 0 success.
 */
int main(int argc, char **argv)
{
	FILE *file;
	char line[256];
	unsigned int line_number = 0;
	stack_t *stack = NULL;

	if (argc != 2)
		usage_error();

	file = fopen(argv[1], "r");
	if (file == NULL)
		file_error(argv[1]);

	while (fgets(line, sizeof(line), file) != NULL)
	{
		line_number++;
		parse_line(line, &stack, line_number);
		fflush(stdin);
	}
	free_stack(stack);
	fclose(file);
	return (0);
}
