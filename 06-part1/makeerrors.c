#include <stdio.h>
#include <stdlib.h>

int main() {

    /* int *x; */
    /* *x = 5; */

    /* malloc(sizeof(int)); */

    /* int *things = malloc(5*sizeof(int)); */
    /* for (int i=0; i < 10; i++) { */
    /*     things[i] = i; */
    /* } */

    /* int *x; */
    /* free(x); */

    /* int x; */
    /* if (x == 3) { */
    /*     printf("yeah right"); */
    /* } */

    int *x = malloc(sizeof(int));
    free(x);
    free(x);
    exit(0);

}
