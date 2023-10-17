#include <stdio.h>

int main() {
    int num1, num2, minimum;
    int *pointer1, *pointer2, *pointer_minimum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    pointer1 = &num1;
   pointer2 = &num2;
    pointer_minimum = &minimum;

    if (*pointer1 < *pointer2) {
        *pointer_minimum = *pointer1;
    } else {
        *pointer_minimum = *pointer2;
    }

    printf("The minimum number is: %d\n", *pointer_minimum);

    return 0;
}


