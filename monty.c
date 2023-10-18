#include "monty.h"

/**
 * main - Entry point.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Always 0 success.
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL, *opcode = NULL;
	size_t len = 0;
	ssize_t bytes_read;
	unsigned int line_number = 0;
	instruction_t func;
	stack_t *number = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file <%s>\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((bytes_read = getline(&line, &len, file)) != -1)
	{
		line_number++;
		opcode = get_opcode(line);
		number = get_arg(line);

		if ((is_opcode(opcode)) != NULL)
			opcode(number, line_number);
		else
		{
			fprintf(stderr, "L<%d>: unknown instruction <%s>", line_number, opcode);
			free(line);
			fclose(file);
			exit(EXIT_FAILURE);
		}
		free(line);
	}
	fclose(file);
	return (0);
}
