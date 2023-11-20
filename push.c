#include "main.h"
/**
 * push - add the node to the stack.
 * @head: a pointer to the top of the stack.
 * @lineno: The number of the line in the file.
 * Return: nothing.
 */
void push(stack_t **head, int lineno)
{
	stack_t *h;

	if (head == NULL || *head == NULL)
		exit(EXIT_FAILURE);
	if (top_stack == NULL)
	{
		top_stack = *head;
		return;
	}
	h = top_stack;
	top_stack = *head;
	top_stack->next = h;
	h->prev = top_stack;
}
