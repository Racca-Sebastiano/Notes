#include <stdio.h>

int factorial(int n)
{
    return n > 1 ? n * factorial(n - 1) : 1;
}

int print_numbers(int from, int to)
{
    if (from < to)
    {
        printf("Numeri da %d a %d:\n", from, to);
        for (int i = from; i <= to; i++)
        {
            printf("%d ", i);
        }
        printf("\nNumeri da %d a %d:\n", to, from);
        for (int i = to; i >= from; i--)
        {
            printf("%d ", i);
        }
        printf("\nNumeri dispari da %d a %d:\n", from, to);
        for (int i = from % 2 == 0 ? from + 1 : from; i <= to; i += 2)
        {
            printf("%d ", i);
        }
    }

    printf("\nFattoriale di %d: %d\n", to, factorial(to));

    return from <= to;
}

int main(void)
{
    int n;
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    return !print_numbers(0, n);
}