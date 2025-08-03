#include <stdio.h>
#include "stack_imp.h"


void push(Stack *s, int value)
{
    if (s->top == s->size - 1) {
        int * temp = (int*)malloc(s->size * 2 * sizeof(int));
        if (temp == NULL) 
        {
            printf("Memory allocation failed\n");
            return;
        }
        for(int i = 0; i < s->size; i++)
        {
            temp[i] = s->item[i]; // Copy existing items to new memory
            printf("Copied %d to new memory\n", s->item[i]);
        }
        free(s->item); // Free old memory
        s->item = NULL;
        s->item = temp;
        s->size *= 2; // Double the size of the stack
        printf("Stack size increased to %d\n", s->size);
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

void initStack(Stack *s, int size)
{
    s->top = -1; // Initialize stack as empty
    s->size = size;
    s->item = (int*)malloc(size * sizeof(int));
    if (s->item == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        printf("Stack initialized with size %d\n", size);
    }

}

void deallcate(Stack *s)
{
    if (s->item != NULL)
    {
        free(s->item);
        s->size = 0;
        s->top = -1;
        printf("Stack deallocated\n");
    }
    return;
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

int getSize(Stack *s)
{
    return s->size;
}

