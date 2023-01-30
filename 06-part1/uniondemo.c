#include <stdio.h>
union Thing {
    int i;
    double d;
};

int main() {
    printf("int size is %lu\n", sizeof(int));
    printf("double size is %lu\n", sizeof(double));
    union Thing t;
    t.i = 3;
    printf("%i\n", t.i);

    t.d = 7.5;
    printf("%i\n", t.i);
}
