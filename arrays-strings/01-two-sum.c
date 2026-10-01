#include <stdio.h>

void twoSum(int nums[], int size, int target, int result[]) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return;
            }
        }
    }

    result[0] = -1;
    result[1] = -1;
}

int main() {

    // Test Case 1
    int nums1[] = {2, 7, 11, 15};
    int result1[2];

    twoSum(nums1, 4, 9, result1);

    printf("Test Case 1:\n");
    printf("Output: [%d, %d]\n", result1[0], result1[1]);

    // Test Case 2
    int nums2[] = {3, 2, 4};
    int result2[2];

    twoSum(nums2, 3, 6, result2);

    printf("\nTest Case 2:\n");
    printf("Output: [%d, %d]\n", result2[0], result2[1]);

    return 0;
}