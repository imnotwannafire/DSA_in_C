#ifndef STACK_IMP_H
#define STACK_IMP_H
#define STACK_SIZE 100
typedef struct {
    int item[STACK_SIZE];
    int top;
} Stack;


void push(Stack *s, int value);
int pop(Stack *s);
void initStack(Stack *s);
void display_stack(Stack *s);
#endif // STACK_IMP_H