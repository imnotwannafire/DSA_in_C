#include <stdio.h>
#include "menu.h"
#include "stack_imp.h"
#include <stdlib.h>

int display_menu() 
{
    Stack s1;
    initStack(&s1, 5);
    printf("Stack Operations Menu:\n");
    printf("1. Push an item onto the stack\n");
    printf("2. Pop an item from the stack\n");
    printf("3. Exit\n");
    int choice, value;
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
    return 0; // This line is never reached, but added to avoid warnings
}