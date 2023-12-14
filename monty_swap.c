#include "monty.h"
/**
 * swap - function to swap between two elements
 * @stack: top node
 * @line_number: line in file
 * Return: nothing
 */
void swap(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->prev == NULL && (*stack)->next == NULL)
	{
		fprintf(stderr, "L<%u>: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		stack_t *swap = *stack;/*temp = a*/
		*stack = swap->next;
		swap->prev = (*stack)->prev;/*a = b*/
		(*stack)->prev = NULL;
		(*stack)->prev = swap;/*b = temp*/
		if(swap->prev != NULL)
		{
			swap->prev->next = *stack;
		}
		free(swap);
	}
}
