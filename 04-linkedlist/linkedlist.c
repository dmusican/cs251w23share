#include <stdlib.h>
#include <stdio.h>

struct LinkedList {
    int value;
    struct LinkedList *next;
};

typedef    struct LinkedList    LinkedList;

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



int main() {
    LinkedList *list = NULL;
    list = insertFrontLL(list, 3);
}
