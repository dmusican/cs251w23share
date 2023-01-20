#include <stdio.h>

int main() {

    int a = 12;
    printf("a = %i\n", a);

    // probably a bad idea...
    int *x;
    x = &a;

    // print as a pointer
    printf("x = %p\n", x);

    *x = 6;
    /* &x = 6; */

    printf("a = %i\n", a);
    printf("*x = %i\n", *x);

    return 0;
}
