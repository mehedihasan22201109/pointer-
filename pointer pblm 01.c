#include <stdio.h>

int main()
{
    int num1, num2, result;
    int *pointer1, *pointer2, *pointer_result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    pointer1 = &num1;
    pointer2 = &num2;
    pointer_result = &result;

    *pointer_result = (*pointer1) * (*pointer2);

    printf("Product: %d\n", *pointer_result);

    return 0;
}
