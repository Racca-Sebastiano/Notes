#include <stdio.h>

int ask_number()
{
    int n;
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    return n;
}

void ask_numbers(int *sum, int *num_counter)
{
    int curr_num;
    while ((curr_num = ask_number()))
    {
        *sum += curr_num;
        (*num_counter) += 1;
    }
}

int main()
{
    int sum, num_counter;
    ask_numbers(&sum, &num_counter);
    printf("La media dei numeri è: %.2f\n", (float)sum / (float)num_counter);
    return 0;
}
