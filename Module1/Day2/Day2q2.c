#include <stdio.h>

void printExponent(double num) {
    unsigned long long *ptr = (unsigned long long *)&num;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;

    // Printing in hexadecimal format
    printf("Exponent (Hex): 0x%llX\n", exponent);

    // Printing in binary format
    printf("Exponent (Binary): 0b");
    for (int i = 11; i >= 0; i--) {
        unsigned long long mask = 1ULL << i;
        putchar((exponent & mask) ? '1' : '0');
    }
    putchar('\n');
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}
