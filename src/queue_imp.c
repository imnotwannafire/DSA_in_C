#include <stdio.h>
#include <stdlib.h>
#include "queue_imp.h"


 void initQueue (Queue *q, int size)
 {
    q->item = (int *)malloc(size * sizeof(int));
    if (q->item == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    q->front = 0;
    q->rear = -1;
    q->size = size;
    q->capacity = 0;
    printf("Queue initialized with size %d\n", size);
 }

 void queue_push(Queue *q, int value)
 {
    if(q->rear == q->size - 1)
    {
        printf("Queue overflow\n");
        return;
    }
    q->rear ++;
    q->item[q->rear] = value;
    q->capacity ++;
    return;
 }
 int queue_pop(Queue *q)
 {
    int value = q->item[q->front];
    q->front ++;
    q->capacity --;
    return value;
 }
 bool Is_queue_empty(Queue *q)
 {
    return q->capacity == 0;
 }

 int queue_capacity(Queue *q)
 {
    return q->capacity;
 }