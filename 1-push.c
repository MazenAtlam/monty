#include "monty.h"

/**
 * push - A function that inserts an element to the top of the stack
 * @stack: The linked list follows LIFO's rule
 * @line_number: The number of the line that includes the current opcode
 *
 * Return: Nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;

	if (cmd[1] == NULL || (cmd[1][0] < 48 || cmd[1][0] > 57))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	new_node = malloc(sizeof(instruction_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = atoi(cmd[1]);
	new_node->next = NULL;
	if (*stack == NULL)
		new_node->prev = NULL;
	else
	{
		(*stack)->next = new_node;
		new_node->prev = (*stack);
	}
	*stack = new_node;
}
