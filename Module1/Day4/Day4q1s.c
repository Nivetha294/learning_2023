#include <stdio.h>

int main() {
    int start = 16;
    int end = 25;
    int sum = 0;

    // Calculating the sum of numbers in the given range
    for (int i = start; i <= end; i++)
    {
        sum += i;
    }

    printf("Sum: %d\n", sum);

    return 0;
}
