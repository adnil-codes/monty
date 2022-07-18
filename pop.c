#include "monty.h"
#include <stddef.h>

stack_t1 *pop(stack_t1 **stack)
{
    stack_t1 *old_top_item = *stack;

    if (old_top_item != NULL)
    {
        *stack = old_top_item->next;
        old_top_item->next = NULL;
        if(*stack)
            (*stack)->prev = NULL;
    }

    return (old_top_item);
}
