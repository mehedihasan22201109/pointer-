
#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int *pointer = arr;

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", pointer + i);
    }

    printf("Elements in reverse order:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d\n", *(pointer + i));
    }

    return 0;
}
