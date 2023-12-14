#include "monty.h"
/**
 * pop - function to delete element from stack
 * @stack: node
 * @line_number: line in the file
 * Return: nothing
 */
void pop(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L<%u>: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		stack _t *new_stack = *stack;/*assign new node to the top*/
		*stack = new_node->next;
		if (stack != NULL)
		{
			stack->pre = NULL;
		}
	}
	free(new_stack);
}
