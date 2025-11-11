#include <stdio.h>

int fibonacci(int n) {
    return n > 1 ? fibonacci(n - 1) + fibonacci(n - 2) : n;
}

int main(void) {
    int k;
    printf("Inserisci un numero: ");
    scanf("%d", &k);
    for(int i = 0; i < k ; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}