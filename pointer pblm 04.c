#include <stdio.h>

int main() {
    int size, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int *pointer = arr;

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", pointer + i);
        sum += *(pointer + i);
    }

    printf("Sum of the elements: %d\n", sum);

    return 0;
}
