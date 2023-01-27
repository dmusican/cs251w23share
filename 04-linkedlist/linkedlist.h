struct LinkedList {
    int value;
    struct LinkedList *next;
};

typedef    struct LinkedList    LinkedList;

// function prototype
LinkedList *insertFrontLL(LinkedList *list, int item);
