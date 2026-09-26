#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        while (left < right && !isalnum((unsigned char)s[left])) {
            left++;
        }

        while (left < right && !isalnum((unsigned char)s[right])) {
            right--;
        }

        if (tolower((unsigned char)s[left]) !=
            tolower((unsigned char)s[right])) {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}

int main() {
    char s[] = "race a car";

    printf("Output: %s\n",
           isPalindrome(s) ? "true" : "false");

    return 0;
}