#include <stdio.h>

int main() {
    // low level, kind of dumb
    char word1[6];
    word1[0] = 'h';
    word1[1] = 'e';
    word1[2] = 'l';
    word1[3] = 'l';
    word1[4] = 'o';
    word1[5] = '\0';
    printf("%s\n", word1);

    // "hello" is a string in static memory
    char *word2 = "hello";
    printf("word2: %s\n", word2);
    word2[0] = 'y';



    char word3[6];
    //strcpy(word2, "hello");

}
