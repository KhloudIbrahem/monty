#include "main.h"
/**
 * addTops - Adds the top two elements of the stack.
 * @head: The top of the stack.
 * @lineno: The line number in the file.
 * Return: Nothing.
 */
void addTops(stack_t **head, int lineno)
{
	int summation = 0;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return;
	(*head) = (*head)->next;
	summation = (*head)->n + (*head)->prev->n;
	(*head)->n = summation;
	free((*head)->prev);
	(*head)->prev = NULL;
}
