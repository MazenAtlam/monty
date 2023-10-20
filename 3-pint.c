#include "monty.h"

/**
 * pint - A function that prints the value at the top of the stack
 * @stack: The linked list follows LIFO's rule
 * @line_number: The number of the line that includes the current opcode
 *
 * Return: Nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%d\n", (*stack)->n);
}
