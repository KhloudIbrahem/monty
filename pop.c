#include "main.h"
/**
 * pop - pop the top of the stack.
 * @head: the top of the stack.
 * @lineno: the line number in the file.
 * Return: Nothing.
 */
void pop(stack_t **head, int lineno)
{
	stack_t *h;

	if (head == NULL || *head == NULL)
		return;
	h = *head;
	*head = h->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(h);
}
