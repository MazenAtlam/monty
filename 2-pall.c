#include "monty.h"

/**
 * pall - A function that prints all the values on the stack,
 *			starting from the top of the stack
 * @stack: The linked list follows LIFO's rule
 * @line_number: The number of the line that includes the current opcode
 *
 * Return: Nothing
 */
void pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *temp = *stack;

	while (temp == NULL)
	{
		fprintf(stdout, "%d\n", temp->n);
		temp = temp->prev;
	}
}
