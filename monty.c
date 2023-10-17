#include "monty.h"

/**
 * main - Entry point.
 * @argv: Argument.
 * Return: Always 0 success.
 */
int main(int argc, char *argv[])
{
	FILE *fp;
	char *line = NULL, **lines = NULL, **number = NULL;
	size_t len = 0;
	int i = 0;
	instruction_t func;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	pf = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file <%s>\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	filter_lines(line, len, fp);
	while (strcmp(line[i], func->opcode) != NULL)
	{
		if (strcmp(line[i] == func->opcode))
		{
			if (arg)
				/*arg = */
			/*execute with arg or without;*/

		func = func->next;
		i++;
	func->opcode(stack, line_number);
	free(line);
	fclose(fp);
	return (0);
}
char *filter_lines(char *line, size_t *len, FILE *fp)
{
	char **lines = NULL;
	ssize_t bytes_read;
	int i = 0, j = 0, flag = 0, flag_int = 0;
	
	while ((bytes_read = getline(&line, &len, fp)) != -1)
	{
		if (line[bytes_read] - 1 == ' ' && flag_int == 0)
		{
			if (flag == 1)
			{
				line[i] == '\0';
				flag_int == 1;
			}
			flag = 1;
			i++;
		}
		else if (flag_int == 0)
		{
			strcpy(lines[i], line);
			i++;
			flag = 0;
		}
		else if (flag_int == 1)
		{
			if ((line[bytes_read] - 1) != ' ')
				strcpy(number[j], line);
			j++;
		}

	}
	return (2darray);
}
