#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    // Test Case 1
    char s1[] = {'h', 'e', 'l', 'l', 'o'};
    int size1 = 5;

    reverseString(s1, size1);

    printf("Test Case 1:\n");
    printf("Output: [");
    for (int i = 0; i < size1; i++) {
        printf("%c", s1[i]);
        if (i < size1 - 1) {
            printf(", ");
        }
    }
    printf("]\n\n");

    // Test Case 2
    char s2[] = {'H', 'a', 'n', 'n', 'a', 'h'};
    int size2 = 6;

    reverseString(s2, size2);

    printf("Test Case 2:\n");
    printf("Output: [");
    for (int i = 0; i < size2; i++) {
        printf("%c", s2[i]);
        if (i < size2 - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}