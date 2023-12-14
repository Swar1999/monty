#include"monty.h"
/**
 * add - function to add 2 elements
 * @stack : top node
 * @lin_number: line in file
 * Return: nothing
 */
void add(stack_t **stack, unsigned int line_number)
{
	int n, m, sum ;
		if ((*stack)->prev == NULL && (*stack)->next == NULL)
		{
			fprintf(stderr, "L<%u>: can't add, stack too short\n", line_number);
			exit(EXIT_FAILURE);
		}
		else
		{
			n = pop(stack);/*remove top element and held i value in n*/
			m = pop(stack);/*remove the new top element and hold it value in m*/
			sum = m + n;
			push(stack, sum);
		}
}			
