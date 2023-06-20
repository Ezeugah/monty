#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *auxl;
	int sus, nodes;

	auxl = *head;
	for (nodes = 0; auxl != NULL; nodes++)
		auxl = auxl->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxl = *head;
	sus = auxl->next->n - auxl->n;
	auxl->next->n = sus;
	*head = auxl->next;
	free(auxl);
}
