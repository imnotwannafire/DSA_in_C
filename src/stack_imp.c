#include <stdio.h>
#include "stack_imp.h"


void push(Stack *s, int value)
{
    if (s->top == STACK_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    s->top++;
    s->item[s->top] = value;
}

int pop(Stack *s)
{
    if (s->top == -1) 
    {
        printf("Stack underflow\n");
        return -9999; // Indicating an error
    }
    int value = s->item[s->top];
    s->top --;
    return value;
}

void initStack(Stack *s)
{
    s->top = -1; // Initialize stack as empty
}

void display_stack(Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    for (int i = s->top; i>=0 ;i--)
    {
        printf("%d ", s->item[i]);
    }
    printf("\n");
}

