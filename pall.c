#include "main.h"
/**
 * print_all - prints all integers in the stack.
 * @head: a pointer to the top of the stack.
 * Return: nothing.
 */
void print_all(stack_t **head)
{
	stack_t *top = *head;

	if (top == NULL)
		return;
	while (top)
	{
		printf("%d\n", top->n);
		top = top->next;
	}
}
