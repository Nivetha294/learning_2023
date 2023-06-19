#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int totalSetBits(int array[], int size) {
    int total_count = 0;
    for (int i = 0; i < size; i++) {
        total_count += countSetBits(array[i]);
    }
    return total_count;
}

int main() {
    int array[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(array) / sizeof(array[0]);

    int total_bits = totalSetBits(array, size);
    printf("Total number of set bits: %d\n", total_bits);

    return 0;
}

