#include "value.h"
#include <stdio.h>

// Bad for many reasons, one of which is
// you won't usuall declare a Value directly,
// you will malloc it
int main() {
    Value v;
    v.i = 3;
    v.type = INT_TYPE;

    // .... much later...
    if (v.type == INT_TYPE) {
        printf("%i\n", v.i);
    }

    v.type = CONS_TYPE;
    v.c.car = NULL;
    v.c.cdr = NULL;
}
