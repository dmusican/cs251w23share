#include <stdio.h>
union Thing {
    int i;
    double d;
};

int main() {
    printf("int size is %lu\n", sizeof(int));
    printf("double size is %lu\n", sizeof(double));
    union Thing t;
    printf("thing size is %lu\n", sizeof(union Thing));
    t.i = 3;
    printf("%i\n", t.i);

    t.d = 7.5;
    printf("%i\n", t.i);


    t.i = 3;
    printf("%i\n", t.d);
}
