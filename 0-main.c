#define ARGSNUM 2

#include "monty.h"

/**
 * main - Entry point
 * @argc: The number of arguments entered
 * @argv: An array of pointers to this arguments
 *
 * Return: 0 (success), non-zero value (failure)
 */
int main(int argc, char *argv[])
{	stack_t *stack = NULL;
	instruction_t instruction[] = { {"push", push},  {"pall", pall},
		{"pint", pint}, {"pop", pop}, {"swap", swap}, {"add", add},
		{"nop", nop}, {NULL, NULL} };
	FILE *stream;
	char *buff = NULL;
	int i, line_num = 0, executed = 0;

	if (argc != ARGSNUM)
	{	fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	stream = fopen(argv[1], "r");
	if (!stream)
	{	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (1)
	{	fflush(stdin);
		line_num++;
		if (fscanf(stream, "%s", buff) == EOF)
			break;
		buff[_strlen(buff) - 1] = '\0';
		cmd[0] = _strtok(buff, " ");
		if (cmd[0] != NULL)
		{	cmd[1] = _strtok(NULL, " ");
			for (i = 0; instruction[i].opcode != NULL; i++)
			{
				if (_strcmp(cmd[0], instruction[i].opcode) == 0)
				{	instruction[i].f(&stack, line_num);
					executed = 1;
			}	}
			if (!executed)
			{	fprintf(stderr, "L%d: unknown instruction %s\n", line_num, cmd[0]);
				exit(EXIT_FAILURE);
	}	}	}
	free(buff);
	fclose(stream);
	return (0);
}
