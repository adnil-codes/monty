#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

void op_push(stack_t1 **stack, unsigned int line_number, char *arg)
{
    
    if (!is_numeric(arg))
    {
        free_stack(stack);
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    push(stack, atoi(arg));
}
