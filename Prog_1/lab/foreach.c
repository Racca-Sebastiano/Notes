#include <stdio.h>

typedef void (*cb)(int, int);

void foreach(int len, int arr[len], cb callback)
{
    for (int i = 0; i < len; i++)
    {
        callback(arr[i], i);
    }
}

void print_array_element(int el, int index)
{
    printf("a[%d]=%d\n", index, el);
}

int main(void)
{
    int a[] = {4, 10, 3, 7};
    foreach ((sizeof a) / (sizeof a[0]), a, &print_array_element);
    return 0;
}
