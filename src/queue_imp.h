#ifndef QUEUE_IMP_H
#define QUEUE_IMP_H
#include <stdbool.h>
typedef struct 
{
    int *item;
    int front;
    int rear;
    int size;
    int capacity;
}Queue;
void initQueue (Queue *q, int size);
void queue_push(Queue *q, int value);
int queue_pop(Queue *q);
bool Is_queue_empty(Queue *q);
int queue_capacity(Queue *q);
#endif