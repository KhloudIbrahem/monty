#include "main.h"
/**
 * create_node - add node to the stack.
 * @head: a pointer to the top of the stack.
 * @num: the value.
 * Return: Nothing.
 */
void create_node(stack_t **head, int num)
{
	stack_t *top, *h;

	h = *head;
	top = malloc(sizeof(stack_t));
	if (top == NULL)
		return;
	if (h)
		h->prev = top;
	top->n = num;
	top->next = *head;
	top->prev = NULL;
	*head = top;
}
