#include <stdio.h>

int find_biggest_ternary(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2, result;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    result = find_biggest_ternary(num1, num2);

    printf("The biggest number is: %d\n", result);

    return 0;
}
