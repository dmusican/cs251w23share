#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

LinkedList *insertFrontLL(LinkedList *list, int item) {
    // Create a new LinkedList struct
    LinkedList *newCell = malloc(sizeof(LinkedList));
    // Put item in it
    (*newCell).value = item;
    // Point next to list passed in
    (*newCell).next = list;
    // Return a pointer to this new struct
    return newCell;
}

void displayLL(LinkedList *list) {
    LinkedList *current = list;
    while (current != NULL) {
        printf("Value = %i\n", (*current).value);
        current = (*current).next;
    }
}

void displayLLAgain(LinkedList *list) {
    LinkedList *current = list;
    while (current != NULL) {
        // current->value?? OR current.value ???
        printf("Value = %i\n", current->value);
        current = current->next;
    }
}

void cleanupLL(LinkedList *list) {
    LinkedList *current = list;
    while (current != NULL) {
        LinkedList *follow = (*current).next;
        free(current);
        current = follow;
    }
}
