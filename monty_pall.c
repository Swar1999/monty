#include"monty.h"
/**
 * pall - function to print all the elements
 * @stack : node
 * @line_number: line in the file
 * Return: nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	/*put a new node as the current top of the stack*/
	stack_t *prt = *stack;
	while(ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next
	}
}
