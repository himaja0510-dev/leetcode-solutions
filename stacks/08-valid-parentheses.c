#include <stdio.h>

int isValid(char s[]) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            top++;
            stack[top] = s[i];
        }
        else {
            if (top == -1) {
                return 0;
            }

            char topChar = stack[top];

            if ((s[i] == ')' && topChar != '(') ||
                (s[i] == ']' && topChar != '[') ||
                (s[i] == '}' && topChar != '{')) {
                return 0;
            }

            top--;
        }
    }

    return top == -1;
}

int main() {
    // Test Case 1
    char s1[] = "()[]{}";

    printf("Test Case 1:\n");
    printf("Output: %s\n", isValid(s1) ? "true" : "false");

    // Test Case 2
    char s2[] = "(]";

    printf("\nTest Case 2:\n");
    printf("Output: %s\n", isValid(s2) ? "true" : "false");

    return 0;
}