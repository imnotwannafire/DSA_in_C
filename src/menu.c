#include <stdio.h>
#include "menu.h"
#include "stack_imp.h"
#include "queue_imp.h"
#include <stdlib.h>

int display_menu() 
{
    int type;
    printf("Operations Menu:\n");
    printf("Enter your choice\n");
    printf("1. Stack\n");
    printf("2. Queue\n");
    scanf("%d", &type);
    int choice, value;
    switch (type)
    {
        case 1:
            Stack s1;
            initStack(&s1, 5);
            printf("Stack Operations Menu:\n");
            printf("1. Push an item onto the stack\n");
            printf("2. Pop an item from the stack\n");
            printf("3. Exit\n");
            while (1) {
                printf("Current stack size: %d\n", getSize(&s1));
                printf("Current stack position: %d\n", s1.top + 1);
                printf("Enter your choice: ");
                scanf("%d", &choice);
                switch (choice) {
                    case 1:
                        printf("Enter value to push: ");
                        scanf("%d", &value);
                        push(&s1, value);
                        display_stack(&s1);
                        break;
                    case 2:
                        value = pop(&s1);
                        if (value != -9999) {
                            printf("Popped value: %d\n", value);
                        }
                        break;
                    case 3:
                        deallcate(&s1);
                        printf("Exiting...\n");
                        return 0;
                    default:
                        printf("Invalid choice. Please try again.\n");
                        break;
                }
            }
            break;
        case 2:
            Queue q1;
            initQueue(&q1, 3);
            printf("Queue Operations Menu:\n");
            printf("1. Push an item onto the queue\n");
            printf("2. Pop an item from the queue\n");
            printf("3. Exit\n");
            while (1) {
                printf("Current queue capacity: %d\n", queue_capacity(&q1));
                printf("Current queue position: front %d, rear: %d\n", q1.front, q1.rear);
                printf("Enter your choice: ");
                scanf("%d", &choice);
                switch (choice) {
                    case 1:
                        printf("Enter value to push: ");
                        scanf("%d", &value);
                        queue_push(&q1, value);
                        break;
                    case 2:
                        if(Is_queue_empty(&q1) != true)
                        {
                            value = queue_pop(&q1);
                            printf("Pop value from queue: %d\n", value);
                        }
                        else
                        {
                            printf("Cannot pop from empty queue\n");
                        }
                        break;
                    case 3:
                        printf("Exiting...\n");
                        return 0;
                    default:
                        printf("Invalid choice. Please try again.\n");
                        break;
                }
            }
            break;
        default:
            printf("Invalid choice\n");
            break;
            
    }
    
    return 0; // This line is never reached, but added to avoid warnings
}