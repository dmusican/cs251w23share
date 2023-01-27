#include <stdio.h>

int main() {
    // low level, kind of dumb
    char word1[6];
    word1[0] = 'h';
    word1[1] = 'e';
    word1[2] = 'l';
    word1[3] = 'l';
    word1[4] = 'o';
    // uh oh
    printf("%s\n", word1);
}
