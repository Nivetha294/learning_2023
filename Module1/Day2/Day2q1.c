#include <stdio.h>

void printExponent(double num) {
    unsigned long long exponent = (*((unsigned long long *)&num) >> 52) & 0x7FF;

    
    printf("Exponent(Hex): 0x%llX\n", exponent);

   
    printf("Exponent(Binary): 0b");
    for (int i = 11; i >= 0; i--) {
        putchar((exponent >> i) & 1 ? '1' : '0');
    }
    putchar('\n');
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}
