#include <stdio.h>

int main() {

    int a = 12;
    printf("a = %i\n", a);

    // probably a bad idea...
    int *x;
    x = &a;

    printf("x = %i\n", x);


    return 0;
}
