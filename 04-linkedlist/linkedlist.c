#include <stdlib.h>
#include <stdio.h>

struct LinkedList {
    int value;
    struct LinkedList *next;
};

typedef    struct LinkedList    LinkedList;

LinkedList *insertFrontLL(LinkedList *list, int item) {

    // Create a new LinkedList struct
    // Put item in it
    // Point next to NULL
    // Return a pointer to this new struct

}



int main() {
    LinkedList *list = NULL;
    list = insertFrontLL(list, 3);
}
