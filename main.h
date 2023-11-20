#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *top_stack;

stack_t *create_elements(int num);
void print_all(stack_t **head);
void nop(stack_t **head, int lineno);
void addTops(stack_t **head, int lineno);
void swapnodes(stack_t **head, int lineno);
void printTop(stack_t **head, int lineno);
void free_elements(void);
void pop(stack_t **head, int lineno);

#endif /* MAIN_H */
