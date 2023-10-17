#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    long long factorial = 1;
    long long *pointer_factorial = &factorial;

    for (int i = 1; i <= num; i++) {
        *pointer_factorial *= i;
    }

    printf("Factorial of %d = %lld\n", num, *pointer_factorial);

    return 0;
}

