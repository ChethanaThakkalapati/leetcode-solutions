#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValid(char* s) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c == '(' || c == '[' || c == '{') {
            stack[++top] = c;
        }
        else {
            if (top == -1) {
                return false;
            }

            char open = stack[top--];

            if ((c == ')' && open != '(') ||
                (c == ']' && open != '[') ||
                (c == '}' && open != '{')) {
                return false;
            }
        }
    }

    return top == -1;
}

int main() {
    char s1[] = "()[]{}";
    char s2[] = "(]";

    printf("Test 1: %s\n", isValid(s1) ? "true" : "false");
    printf("Test 2: %s\n", isValid(s2) ? "true" : "false");

    return 0;
}