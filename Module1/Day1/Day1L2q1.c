#include <stdio.h>

int findGreatest(int num1, int num2, int num3) {
    int greatest;

    if (num1 >= num2 && num1 >= num3) {
        greatest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        greatest = num2;
    } else {
        greatest = num3;
    }

    return greatest;
}

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int result = findGreatest(num1, num2, num3);
    printf("The greatest number is: %d\n", result);

    return 0;
}