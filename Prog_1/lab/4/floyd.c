#include <stdio.h>

int main(void)
{
    int n;
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", k++);
        }

        printf("\n");
    }
}
