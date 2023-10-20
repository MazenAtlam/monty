#include "monty.h"

/**
 * add - A function that adds the top two elements in the second top element of
 *			the stack, then removes the top element
 * @stack: The linked list follows LIFO's rule
 * @line_number: The number of the line that includes the current opcode
 *
 * Return: Nothing
 */
void add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->prev == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->prev->n += (*stack)->n;
	pop(stack, line_number);
}
