struct LinkedList {
    int value;
    struct LinkedList *next;
};

typedef    struct LinkedList    LinkedList;

LinkedList *insertFrontLL(LinkedList *list, int item);
