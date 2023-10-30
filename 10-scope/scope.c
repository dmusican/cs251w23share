#include <stdio.h>

// Function prototypes so I don't have to worry about the order they appear in
void fun1();
void fun2();

int x = 3;

void fun1() {
    int x = 4;
    fun2();
}

void fun2() {
    printf("%i\n", x);
}

int main() {
    fun1();
}
