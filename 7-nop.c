#include "monty.h"

/**
 * nop - A function that doesn’t do anything
 * @stack: The linked list follows LIFO's rule
 * @line_number: The number of the line that includes the current opcode
 *
 * Return: Nothing
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
