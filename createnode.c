#include "main.h"
/**
 * create_node - add node to the stack.
 * @head: a pointer to the top of the stack.
 * @num: the value.
 * Return: Nothing.
 */
stack_t *create_elements(int num)
{
	stack_t *top;

	top = malloc(sizeof(stack_t));
	if (top == NULL)
		return;
	top->next = NULL;
	top->prev = NULL;
	top->n = num;
	return (top);
}
