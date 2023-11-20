#include "main.h"
/**
 * printTop - Print the top element in the stack.
 * @head: The top of the stack.
 * @lineno: The line number in the file.
 * Return: Nothing.
 */
void printTop(stack_t **head, int lineno)
{
	if (head == NULL || (*head) == NULL)
		return;
	printf("%d\n", (*head)->n);
}
