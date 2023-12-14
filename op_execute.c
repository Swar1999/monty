#include "monty.h"
/**
 *
 */
int execute(stack_t **stack, char *str, unsigned int line_number, FILE *file)
{
	unsigned int i = 0;
	char *op, *str_cp;
	instruction_t ops[] = {{"push", push}, {"pall", pall}, {"pint", pint}
		{"pop", pop}, {"swap", swap}, {"add", add}, {"nop", nop}};
		str_cp = malloc(strlen(str) + 1);
		strcpy(str_cp, str);/*copy the line containts*/
		op = strtok(str_cp, " \n\t");
		while (ops[i].opcode && op)
		{
			if (strcmp(op, ops[i].opcode) == 0)
			{
				ops[i].f(stack, line_number);/*execute the function*/
				free(str_cp);
				return (0)
			}
			i++;
		}
			fprintf(stderr, "L<%u>: unknown instruction <%s>\n", line_number, op);
			fclose(file);
			free(str_cp);
			free(str);
			exit(EXIT_FAILURE);
}
