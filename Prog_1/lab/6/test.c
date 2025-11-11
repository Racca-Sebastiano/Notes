#include <stdio.h>
#include <stdbool.h>

#define MAX_ARR_LEN 20

size_t leggi_array(int arr[MAX_ARR_LEN]);
int conta_univoci(size_t len, int arr[len]);
void stampa_elementi_ripetuti(size_t lenA, int arrA[lenA], size_t lenB, int arrB[lenB]);

int main(void) {
    int arrA[MAX_ARR_LEN], arrB[MAX_ARR_LEN];
    size_t lenA = leggi_array(arrA);
    size_t lenB = leggi_array(arrB);
    printf("%d %d\n", conta_univoci(lenA, arrA), conta_univoci(lenB, arrB));
    stampa_elementi_ripetuti(lenA, arrA, lenB, arrB);
    return 0;
}

size_t leggi_array(int arr[MAX_ARR_LEN]) {
    size_t N;
    scanf("%zu", &N);
    for(size_t i = 0; i < N; i++) {
        scanf("%d", &(arr[i]));
    }
    return N;
}

int conta_univoci(size_t len, int arr[len]) {
    int univoci = 0;
    for(size_t i = 0; i < len; i++) {
        bool is_unique = true;
        for(size_t j = 0; j < len; j++) {
            if(i != j && arr[i] == arr[j]) {
                is_unique = false;
            }
        }
        univoci += is_unique;
    }
    return univoci;
}

// prende in ingresso due array e stampa (su di una riga) tutti gli elementi del primo array che appaiono anche nel secondo array. Se lo stesso elemento appare più volte nel primo array (e si trova nel secondo array), allora viene stampato più volte.
void stampa_elementi_ripetuti(size_t lenA, int arrA[lenA], size_t lenB, int arrB[lenB]) {
    for(size_t i = 0; i < lenA; i++) {
        for(size_t j = 0; j < lenB; j++) {
            if(arrA[i] == arrB[j]) {
                printf("%d ", arrA[i]);
            }
        }
    }
}
