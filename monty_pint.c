#include "monty.h"
/**
 * pint - print the value at the top of stack
 * @stack: node
 * line_number: line in the file
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L<%u>: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("%d\n", (*stack)->n);
	}
}
