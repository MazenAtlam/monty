#include "monty.h"

/**
 * swap - A function that swaps the top two elements of the stack
 * @stack: The linked list follows LIFO's rule
 * @line_number: The number of the line that includes the current opcode
 *
 * Return: Nothing
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (*stack == NULL || (*stack)->prev == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->n;
	(*stack)->n = (*stack)->prev->n;
	(*stack)->prev->n = temp;
}
