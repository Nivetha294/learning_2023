#include <stdio.h>

void reverseArray(int arr[], int len) {
    int start = 0;
    int end = len - 1;

    while (start < end) {
        // Swapping elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 84, 20, 36, 12, 90, 72, 10, 45, 56};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, len);

    // Reversing the array
    reverseArray(arr, len);

    printf("Reversed array: ");
    printArray(arr, len);

    return 0;
}
