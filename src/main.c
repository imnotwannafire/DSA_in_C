#include "stack_imp.h"
#include <stdio.h>

int main()
{
    Stack s1;
    initStack(&s1);
    push(&s1,10);
    push(&s1,20);
    printf("delete item from stack: %d\n", pop(&s1));
    display_stack(&s1);
    printf("delete item from stack: %d\n", pop(&s1));
    display_stack(&s1);
    printf("delete item from stack: %d\n", pop(&s1));
    display_stack(&s1);
    push(&s1, 30);
    display_stack(&s1);
    return 0;
}