#include "main.h"
/**
 * swapnodes - Swaps between the top two nodes.
 * @head: The top of the stack.
 * @lineno: The line number in the file.
 * Return: Nothing.
 */
void swapnodes(stack_t **head, int lineno)
{
	stack_t *h;

	if (head == NULL || (*head) == NULL || (*head)->next == NULL)
		return;
	h = (*head)->next;
	(*head)->next = h->next;
	if (h->next != NULL)
		h->next->prev = *head;
	h->next = *head;
	(*head)->prev = h;
	h->prev = NULL;
	*head = h;
}
