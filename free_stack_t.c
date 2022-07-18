#include "monty.h"
#include <stdlib.h>

void free_stack_t(stack_t1 *item)
{
    item->next = NULL;
    item->prev = NULL;
    free(item);
}
