#include <stdio.h>

int main() {
    int arr[] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55};
    int len = sizeof(arr) / sizeof(arr[0]);
    int sumEven = 0;
    int sumOdd = 0;

    // Calculating the sum of even and odd elements
    for (int i = 0; i < len; i++) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    int diff = sumEven - sumOdd;

    printf("Sum of even elements: %d\n", sumEven);
    printf("Sum of odd elements: %d\n", sumOdd);
    printf("Difference: %d\n", diff);

    return 0;
}
