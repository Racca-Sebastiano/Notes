#include <stdio.h>

int main(void) {
    char alfabeto[27];

    for(int i = 0; i < 27; i++) {
        alfabeto[i] = i+65;
    }
    alfabeto[26] = '\0';

    printf("%s\n", alfabeto);
    return 0;
}