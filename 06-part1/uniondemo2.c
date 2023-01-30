#include "value.h"
#include <stdio.h>

int main() {
    Value v;
    v.i = 3;
    v.type = INT_TYPE;

    // .... much later...
    if (v.type == INT_TYPE) {
        printf("%i\n", v.i);
    }
