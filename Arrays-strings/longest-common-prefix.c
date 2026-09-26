#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    char* prefix = strs[0];

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        while (prefix[j] != '\0' &&
               strs[i][j] != '\0' &&
               prefix[j] == strs[i][j]) {
            j++;
        }

        prefix[j] = '\0';

        if (prefix[0] == '\0') {
            return "";
        }
    }

    return prefix;
}

int main() {
    char s1[] = "flower";
    char s2[] = "flow";
    char s3[] = "flight";

    char* strs[] = {s1, s2, s3};

    char* result = longestCommonPrefix(strs, 3);

    printf("Output: \"%s\"\n", result);

    return 0;
}