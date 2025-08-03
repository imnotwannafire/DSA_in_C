#ifndef STACK_IMP_H
#define STACK_IMP_H
#define STACK_SIZE 100
typedef struct {
    int* item;
    int top;
    int size;
} Stack;


void push(Stack *s, int value);
int pop(Stack *s);
void initStack(Stack *s, int size);
void display_stack(Stack *s);
void deallcate(Stack *s);
int getSize(Stack *s);

#endif // STACK_IMP_H