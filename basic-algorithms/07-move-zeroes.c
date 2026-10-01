#include <stdio.h>

void moveZeroes(int nums[], int size) {
    int position = 0;

    for (int i = 0; i < size; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < size) {
        nums[position] = 0;
        position++;
    }
}

void printArray(int nums[], int size) {
    printf("[");

    for (int i = 0; i < size; i++) {
        printf("%d", nums[i]);

        if (i < size - 1) {
            printf(", ");
        }
    }

    printf("]\n");
}

int main() {
    // Test Case 1
    int nums1[] = {0, 1, 0, 3, 12};

    printf("Test Case 1:\n");
    moveZeroes(nums1, 5);
    printf("Output: ");
    printArray(nums1, 5);

    // Test Case 2
    int nums2[] = {0, 0, 1};

    printf("\nTest Case 2:\n");
    moveZeroes(nums2, 3);
    printf("Output: ");
    printArray(nums2, 3);

    return 0;
}