#include "linkedlist.h"

int main() {
    LinkedList *list = NULL;
    list = insertFrontLL(list, 2);
    list = insertFrontLL(list, 5);
    list = insertFrontLL(list, 3);
    displayLLAgain(list);
    cleanupLL(list);
}
