#include "main.h"
/**
 * free_elements - delete nodes.
 * Return: Nothing.
 */
void free_elements(void)
{
	stack_t *h;

	if (top_stack == NULL)
		return;
	while (top_stack)
	{
		h = top_stack;
		top_stack = top_stack->next;
		free(h);
	}
}
