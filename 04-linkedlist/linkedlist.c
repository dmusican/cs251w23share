#include <stdlib.h>
#include <stdio.h>

struct LinkedList {
    int value;
    struct LinkedList *next;
};

typedef    struct LinkedList    LinkedList;

LinkedList *insertFrontLL(LinkedList *list, int item) {


}



int main() {
    LinkedList *list = NULL;
    list = insertFrontLL(list, 3);
}
