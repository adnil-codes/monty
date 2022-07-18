#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE

#include <stdio.h>

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
} stack_t1;

stack_t1 *new_stack_t(int n);
stack_t1 *push(stack_t1 **stack, int n);
stack_t1 *pop(stack_t1 **stack);
void free_stack_t(stack_t1 *item);
void free_stack(stack_t1 **stack);

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
        void (*f)(stack_t1 **stack, unsigned int line_number);
} instruction_t;

/* opcode handlers */
void op_push(stack_t1 **stack, unsigned int line_number, char *arg);

void op_pall(stack_t1 **stack, unsigned int line_number);

void op_pint(stack_t1 **stack, unsigned int line_number);
void op_pop(stack_t1 **stack, unsigned int line_number);


void (*select_op_code_handler(char *op_code))(stack_t1 **, unsigned int);


void monty_exec(FILE *fp);

int is_numeric(char *str);

#endif /* MONTY_H */
