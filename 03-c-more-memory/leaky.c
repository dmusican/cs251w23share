#include <stdio.h>
#include <stdlib.h>

int main() {

    int *x;
    while (1) {
        x = malloc(sizeof(int));
        free(x);
    }
}
