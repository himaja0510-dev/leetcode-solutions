#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char* strs[], int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    for (int i = 0; strs[0][i] != '\0'; i++) {
        char current = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != current || strs[j][i] == '\0') {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }

    return strs[0];
}

int main() {
    // Test Case 1
    char s1[] = "flower";
    char s2[] = "flow";
    char s3[] = "flight";

    char* strs1[] = {s1, s2, s3};

    printf("Test Case 1:\n");
    printf("Output: %s\n", longestCommonPrefix(strs1, 3));

    // Test Case 2
    char a1[] = "dog";
    char a2[] = "racecar";
    char a3[] = "car";

    char* strs2[] = {a1, a2, a3};

    printf("\nTest Case 2:\n");
    printf("Output: %s\n", longestCommonPrefix(strs2, 3));

    return 0;
}