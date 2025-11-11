#include <stdio.h>

size_t _binary_search(int *arr, int target, int low, int high)
{
    if (high < low)
        return -1;
    int middle = (low + high) / 2;
    if (target < arr[middle])
        return _binary_search(arr, target, low, middle - 1);
    if (target > arr[middle])
        return _binary_search(arr, target, middle + 1, high);
    return middle;
}

size_t binary_search(size_t len, int arr[len], int target)
{
    return _binary_search(arr, target, 0, len);
}

int main(void)
{
    int arr[] = {100, 200, 300, 500, 900};
    int target = 500;

    printf("Target (%d) è alla posizione %zu\n", target, binary_search((sizeof arr) / (sizeof arr[0]), arr, target));

    return 0;
}