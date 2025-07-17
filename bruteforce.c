#include <stdio.h>
#include <string.h>

// Brute Force pattern matching function
void bruteForceMatch(char text[], char pattern[]) {
    int n = strlen(text);
    int m = strlen(pattern);
    int i, j;

    for (i = 0; i <= n - m; i++) {
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == m) {
            printf("Pattern found at index %d\n", i);
        }
    }
}

int main() {
    char text[100], pattern[50];

    printf("Enter the text: ");
    scanf("%s", text);

    printf("Enter the pattern: ");
    scanf("%s", pattern);

    bruteForceMatch(text, pattern);

    return 0;
}
