#include "monty.h"
/**
 * push - function to push element into stack
 * @stack: new node
 * @line_number: line in file
 * Return: nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	int num;/*value assosiate with push*/
	if(!num)/*user input invalid thing*/
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	/*creat a new node*/
	stack_t *new_elem = malloc(sizeof(stack_t));/*malloc1*/
	if (new_elem == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	/*ckeck if the list is empty*/
	if (stack == NULL)
	{
		new_elem->n = num;
		new_elem->next = *stack;
		new_elem->prev = NULL;
	}
	else/*list is not empty*/
	{
		(*stack)->prev = new_elem;
	}
	*stack = new_elem;/*update the top element of the list*/
	/*if insertion is success ful free the node*/
	if(new_elem != NULL)
		free(new_elem);
}
