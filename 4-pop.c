#include "monty.h"

/**
 * pop - A function that removes the top element of the stack
 * @stack: The linked list follows LIFO's rule
 * @line_number: The number of the line that includes the current opcode
 *
 * Return: Nothing
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = (*stack);

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->prev;
	if (*stack != NULL)
		(*stack)->next = NULL;
	free(temp);
}
